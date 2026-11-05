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
# An edited table row is a #include, not a .c: upstream's staleness check cannot see it, so drop the
# object that was built from the previous rows (tools/cow/cowdiff.py owns that rule and its hash stamp).
& $Python.Source 'tools\cow\cowdiff.py' '--stale-deps' *>> $Log
$results = @()
foreach ($target in $TargetList) {
    $started = Get-Date
    "----- python tools/build.py $target -----" | Add-Content -Path $Log -Encoding utf8
    # tools\cow\build_cached.py runs the SAME upstream target, but skips recomp.py when nothing it
# reads has changed: host() and boot64() each call recomp('generated/all','--all'), and 18.28s of
# the 42s this script used to take was regenerating an unchanged translation, twice.
& $Python.Source 'tools\cow\build_cached.py' $target *>> $Log
    $code = $LASTEXITCODE
    $secs = [int] ((Get-Date) - $started).TotalSeconds
    $verdict = if ($code -eq 0) { 'PASS' } else { 'FAIL' }
    $results += [pscustomobject]@{ target = $target; exit = $code; seconds = $secs; verdict = $verdict }
    Write-Output ("BUILD_CHECK {0} {1} exit={2} {3}s" -f $verdict, $target, $code, $secs)
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
