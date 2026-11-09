<#
    build_check.ps1 - is the tree buildable and are the two upstream tests green?

    The loop calls this in its per-unit precheck ("build green at HEAD") and the gate calls it
    before deciding PASS/FAIL. Both targets are x86 and both run recomp.py against generated/,
    so they run strictly in sequence: two recomp.py --all passes writing generated/all at once
    would race.

      pwsh -NoProfile -File tools/cow/build_check.ps1                     # host, difftest, boot64
      pwsh -NoProfile -File tools/cow/build_check.ps1 -Targets difftest
      pwsh -NoProfile -File tools/cow/build_check.ps1 -Targets host,difftest -Json

    -Targets is ONE comma-separated string on purpose: through Start-Process -ArgumentList (how the
    loop launches this, since a shell call is a new process and background jobs die with it) a
    [string[]] parameter arrives as a single element and 'host difftest' becomes a positional error.

    Exit code: 0 if every requested target passed, 1 otherwise. Full output goes to
    build/cow-check.log (gitignored); stdout carries the per-target verdict lines and tail.
#>
[CmdletBinding()]
param(
    [string] $Targets = 'host,difftest,boot64',
    [string] $Log     = '',
    [switch] $Json
)

$ErrorActionPreference = 'Stop'
$RepoRoot = (Resolve-Path (Join-Path $PSScriptRoot '..\..')).Path
Set-Location $RepoRoot

$TargetList = @($Targets -split ',' | ForEach-Object { $_.Trim() } | Where-Object { $_ })
if (-not $TargetList) { Write-Output 'BUILD_CHECK FAIL: no targets given'; exit 1 }

if (-not $Log) { $Log = Join-Path $RepoRoot 'build\cow-check.log' }
New-Item -ItemType Directory -Force -Path (Split-Path $Log) | Out-Null
$StartedUtc = (Get-Date).ToUniversalTime().ToString('yyyy-MM-dd HH:mm:ss')
"=== build_check $($TargetList -join ',') started $StartedUtc UTC ===" | Set-Content -Path $Log -Encoding utf8

$Python = (Get-Command python -ErrorAction SilentlyContinue)
if (-not $Python) { Write-Output 'BUILD_CHECK FAIL: python not on PATH'; exit 1 }

# ---------------------------------------------------------------- one build at a time, across processes
# generated/ and build/ are shared by every build in the tree. Two `python tools/build.py host` runs
# (the loop's gate plus a manual gate, or a second harness) interleave writes to generated/all and
# build/all64, and the link then fails on a half-written table.c - blaming a unit for a broken build.
# A lock directory makes the second one wait. A lock left behind by a killed process is taken over after
# 20 minutes, which is longer than any real build here.
$Lock = Join-Path $RepoRoot 'build\.build.lock'
New-Item -ItemType Directory -Force -Path (Split-Path $Lock) | Out-Null
$waited = 0
while (-not (New-Item -ItemType Directory -Path $Lock -ErrorAction SilentlyContinue)) {
    # The 20-minute age rule below is a fallback for a lock whose owner we cannot see. But owner.txt records
    # the holder's pid, and "is that process still alive" is a FACT, not a guess: a build_check killed by a
    # timeout (which is how this was found on 2026-11-09) leaves its lock behind and the next run waits 20
    # minutes for a process that is already gone. Take over a dead owner immediately.
    $ownerPid = 0
    $ownerFile = Join-Path $Lock 'owner.txt'
    if (Test-Path $ownerFile) {
        $m = [regex]::Match((Get-Content $ownerFile -Raw -ErrorAction SilentlyContinue), 'pid=(\d+)')
        if ($m.Success) { $ownerPid = [int]$m.Groups[1].Value }
    }
    if ($ownerPid -gt 0 -and -not (Get-Process -Id $ownerPid -ErrorAction SilentlyContinue)) {
        Write-Output "BUILD_CHECK: taking over a lock whose owner pid=$ownerPid is dead"
        Remove-Item -LiteralPath $Lock -Recurse -Force -ErrorAction SilentlyContinue
        continue
    }
    $age = ((Get-Date) - (Get-Item $Lock).LastWriteTime).TotalMinutes
    if ($age -gt 20) {
        Write-Output "BUILD_CHECK: taking over a $([int]$age)-minute-old lock"
        Remove-Item -LiteralPath $Lock -Recurse -Force -ErrorAction SilentlyContinue
        continue
    }
    if ($waited -gt 1800) { Write-Output 'BUILD_CHECK FAIL: another build held the lock for 30 minutes'; exit 1 }
    Start-Sleep -Seconds 5
    $waited += 5
}
Set-Content -Path (Join-Path $Lock 'owner.txt') -Value "pid=$PID targets=$Targets $(Get-Date -Format o)" -Encoding utf8
try {
# A build killed halfway leaves its TEST BINARIES running, not just its lock. On 2026-11-09 a `boot.exe`
# orphaned when its parent build_cached.py was killed (Stop-Process kills a process, not its tree) sat at
# 0 CPU holding a handle on build\boot.exe, so every later link died with LNK1104 "cannot open file" - and
# the failure looked like a broken unit, and was reported as one, for as long as it took to notice a process
# nobody had started on purpose. These are OUR build outputs, under build\, launched only by this harness,
# so a live one when a build is starting is by definition an orphan: kill it and say so.
$StaleBin = @(Get-Process -ErrorAction SilentlyContinue | Where-Object {
    $_.Path -and $_.Path.StartsWith((Join-Path $RepoRoot 'build\'), [StringComparison]::OrdinalIgnoreCase) -and
    $_.Name -in @('boot','host','host64','difftest','cowdiff','FFXiMain')
})
foreach ($stale in $StaleBin) {
    # Report what HAPPENED, not what was attempted. taskkill cannot reap a zombie whose parent never waited on
    # it, and printing "killing..." for a process that survives teaches the reader to distrust the line.
    & taskkill /PID $stale.Id /T /F 2>&1 | Out-Null
    Start-Sleep -Milliseconds 400
    if (Get-Process -Id $stale.Id -ErrorAction SilentlyContinue) {
        Write-Output "BUILD_CHECK: build binary $($stale.Path) (pid=$($stale.Id)) is still listed after taskkill - a zombie whose parent never reaped it. Not fatal (it holds no lock the link needs), but it will be reported again until the parent is reaped."
    } else {
        Write-Output "BUILD_CHECK: killed orphaned build binary $($stale.Path) (pid=$($stale.Id), started $($stale.StartTime.ToString('MM-dd HH:mm')), cpu=$([math]::Round($stale.CPU,1))s) - it would have held a handle and turned the next link into LNK1104"
    }
}
# An output left delete-pending by a killed link is handled where it is diagnosed: see the LNK1104 retry
# below. Deleting outputs eagerly would destroy the cached build this script depends on.
# An edited table row is a #include, not a .c: upstream's staleness check cannot see it, so drop the
# object that was built from the previous rows (tools/cow/cowdiff.py owns that rule and its hash stamp).
& $Python.Source 'tools\cow\cowdiff.py' '--stale-deps' *>> $Log
# tools\cow\build_cached.py runs the SAME upstream target, but skips recomp.py when nothing it
# reads has changed: host() and boot64() each call recomp('generated/all','--all'), and 18.28s of
# the 42s this script used to take was regenerating an unchanged translation, twice.
#
# The child is started and WAITED ON WITH A DEADLINE, not called with `&`. A plain call has no timeout, and
# on 2026-11-09 a wedged `build_cached.py host` sat for 30 minutes on 0.5 s of CPU while its parent was
# killed by the caller's own timeout - so the loop's behaviour proof produced NO output at all and held the
# build lock. A check that can hang forever is worse than a check that fails, because nothing downstream
# learns anything. A wedge is exit 124 with a stated reason.
function Invoke-CachedBuild {
    param([string]$Target, [int]$TimeoutSecs)
    $outLog = "$Log.$Target.out"; $errLog = "$Log.$Target.err"
    $child = Start-Process -FilePath $Python.Source -ArgumentList @('tools\cow\build_cached.py', $Target) `
        -WorkingDirectory $RepoRoot -NoNewWindow -PassThru `
        -RedirectStandardOutput $outLog -RedirectStandardError $errLog
    $wedged = -not $child.WaitForExit($TimeoutSecs * 1000)
    if ($wedged) {
        # Kill the TREE: the compiler is this child's child, and killing only the parent would leave cl.exe
        # writing into build/all64 with nobody waiting on it - the half-written table.c this file exists to
        # prevent, arriving by a different route. (This is also why a manual Stop-Process on a wedged build
        # leaves boot.exe behind: it does not take the tree.)
        & taskkill /PID $child.Id /T /F 2>&1 | Out-Null
        try { $child.Kill(); $child.WaitForExit(5000) | Out-Null } catch { }
    }
    foreach ($l in @($outLog, $errLog)) {
        if (Test-Path $l) { Get-Content $l -ErrorAction SilentlyContinue | Add-Content -Path $Log -Encoding utf8 }
    }
    return @{ code = $(if ($wedged) { 124 } else { $child.ExitCode }); wedged = $wedged }
}

$results = @()
foreach ($target in $TargetList) {
    $started = Get-Date
    "----- python tools/build.py $target -----" | Add-Content -Path $Log -Encoding utf8
    $BuildTimeoutSecs = 900
    if ($env:COW_BUILD_TIMEOUT_SECS) { $BuildTimeoutSecs = [int]$env:COW_BUILD_TIMEOUT_SECS }
    $r = Invoke-CachedBuild -Target $target -TimeoutSecs $BuildTimeoutSecs
    if (-not $r.wedged -and $r.code -ne 0) {
        # LNK1104 "cannot open file X" is not a compile error: the linker could not even CREATE X, which is
        # what a delete-pending output does (a live handle without FILE_SHARE_DELETE, left by a killed link).
        # Renaming such a file is legal where deleting it is not, and the linker only needs the name free, so
        # clear the named files and try exactly once. A second LNK1104 means something is still holding it,
        # and the message says so instead of looking like a broken unit.
        $dead = @()
        foreach ($l in (Get-Content $Log -Tail 400 -ErrorAction SilentlyContinue)) {
            $m = [regex]::Match($l, "cannot open file '([^']+)'")
            if ($m.Success) { $dead += $m.Groups[1].Value }
        }
        if ($dead.Count) {
            foreach ($d in ($dead | Select-Object -Unique)) {
                $p = if ([IO.Path]::IsPathRooted($d)) { $d } else { Join-Path $RepoRoot $d }
                if (Test-Path $p) {
                    try {
                        Rename-Item $p ($p + '.dead-' + (Get-Date -Format 'HHmmss')) -ErrorAction Stop
                        Write-Output "BUILD_CHECK: $d was delete-pending; moved aside for one retry"
                    } catch { Write-Output "BUILD_CHECK: $d is held by a live process that could not be cleared" }
                }
            }
            "----- retry $target after clearing delete-pending outputs -----" | Add-Content -Path $Log -Encoding utf8
            $r = Invoke-CachedBuild -Target $target -TimeoutSecs $BuildTimeoutSecs
        }
    }
    $code = $r.code; $wedged = $r.wedged
    $secs = [int] ((Get-Date) - $started).TotalSeconds
    $verdict = if ($code -eq 0) { 'PASS' } else { 'FAIL' }
    $why = if ($wedged) { " WEDGED: no exit in $BuildTimeoutSecs s (killed); raise COW_BUILD_TIMEOUT_SECS if this target is legitimately slow" } else { '' }
    $results += [pscustomobject]@{ target = $target; exit = $code; seconds = $secs; verdict = $verdict }
    Write-Output ("BUILD_CHECK {0} {1} exit={2} {3}s{4}" -f $verdict, $target, $code, $secs, $why)
    if ($code -ne 0) {
        Write-Output "  last lines of $Log :"
        Get-Content $Log -Tail 25 | ForEach-Object { '    ' + $_ }
        break
    }
}

"=== build_check done: $($results.verdict -join ',') ===" | Add-Content -Path $Log -Encoding utf8
if ($Json) { $results | ConvertTo-Json -Compress | Write-Output }
} finally {
    Remove-Item -LiteralPath $Lock -Recurse -Force -ErrorAction SilentlyContinue
}
if ($results.verdict -contains 'FAIL') { exit 1 }
exit 0
