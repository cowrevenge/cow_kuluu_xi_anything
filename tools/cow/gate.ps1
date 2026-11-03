<#
    gate.ps1 - the only judge of whether a unit is done. Not our judgement: PASS here, or it is not done.

        pwsh -NoProfile -File tools/cow/gate.ps1 0x100083b0
        pwsh -NoProfile -File tools/cow/gate.ps1 0x100083b0 -SkipBuild      # fast loop iteration
        pwsh -NoProfile -File tools/cow/gate.ps1 0x100083b0 -Json

    FAIL if any of:
      * the build fails, or difftest or boot64 goes red;
      * cowdiff fails, or coverage is short with no cow/unreached/<hex>.txt to explain it;
      * user code (outside layout/ and the COW_ADAPTER block) contains a 0x10xxxxxx literal, an
        rd*/wr* with a numeric offset, a goto, a call to f_<hex> or rt_orig_, or a
        TODO/FIXME/stub/NotImplemented/empty-body marker;
      * the user function is a bare pass-through to another function with no logic of its own;
      * an identifier the code uses is not registered in cow/names.csv, or a guess/placeholder is
        missing from docs/cow/NAMES_TODO.md.

    A guess or a placeholder PASSES: naming is a step, never a wall. Output is one plain
    "GATE PASS|FAIL <hex> <check> <reason>" line per check, then a verdict line; exit 0 or 1.
#>
[CmdletBinding()]
param(
    [string] $Entry = '',
    [switch] $SkipBuild,
    [switch] $Json
)

$ErrorActionPreference = 'Stop'
$RepoRoot = (Resolve-Path (Join-Path $PSScriptRoot '..\..')).Path
Set-Location $RepoRoot

if (-not $Entry) { Write-Output 'GATE FAIL (no entry given: gate.ps1 <hex>)'; exit 1 }
$Hex = $Entry.ToLower().Replace('0x', '')
if ($Hex -notmatch '^[0-9a-f]{8}$') { Write-Output "GATE FAIL $Entry not an 8 hex digit entry"; exit 1 }

$Results = New-Object System.Collections.Generic.List[object]
function Add-GateResult([bool] $Ok, [string] $Check, [string] $Reason)
{
    $script:Results.Add([pscustomobject]@{ check = $Check; ok = $Ok; reason = $Reason })
    if ($Json) { return }
    if ($Ok) { Write-Output ("GATE PASS {0} {1} {2}" -f $Hex, $Check, $Reason) }
    else { Write-Output ("GATE FAIL {0} {1} {2}" -f $Hex, $Check, $Reason) }
}

# ---------------------------------------------------------------- the ledger row and its file
$LedgerPath = Join-Path $RepoRoot 'ledger\functions.csv'
$Row = $null
if (Test-Path $LedgerPath) {
    $Row = @(Import-Csv -Path $LedgerPath | Where-Object { $_.entry.ToLower().Replace('0x','') -eq $Hex })[0]
}
if (-not $Row) { Add-GateResult $false 'ledger' "no row for 0x$Hex"; }
elseif ($Row.thunk.ToLower() -eq 'true') { Add-GateResult $false 'ledger' "$Hex is a thunk: nothing to convert" }
else { Add-GateResult $true 'ledger' ("status={0} rank={1} file={2}" -f $Row.status, $Row.leaf_rank, $Row.file) }

$UnitFile = if ($Row) { $Row.file } else { '' }
$UnitPath = if ($UnitFile) { Join-Path $RepoRoot ($UnitFile.Replace('/', '\')) } else { '' }
if (-not $UnitPath -or -not (Test-Path $UnitPath)) {
    Add-GateResult $false 'source' "ledger names no existing file ($UnitFile)"
    $UserLines = @()
} else {
    Add-GateResult $true 'source' $UnitFile
    # everything outside the adapter block: the adapter is marshalling, the gate does not read it
    $All = Get-Content -Path $UnitPath
    $UserLines = @()
    $InAdapter = $false
    foreach ($Line in $All) {
        if ($Line -match 'COW_ADAPTER BEGIN') { $InAdapter = $true; continue }
        if ($Line -match 'COW_ADAPTER END')   { $InAdapter = $false; continue }
        if ($InAdapter) { continue }
        if ($Line -match '^\s*\*') { continue }        # block comment prose
        if ($Line -match '^\s*//') { continue }
        $UserLines += $Line
    }
}

# ---------------------------------------------------------------- readability of user code
function Test-UserCode([string] $Pattern, [string] $Label) {
    $Hits = @($UserLines | Select-String -Pattern $Pattern | ForEach-Object { $_.Line.Trim() })
    if ($Hits.Count) { Add-GateResult $false 'readable' ("{0}: {1}" -f $Label, ($Hits[0])) }
    else { Add-GateResult $true 'readable' $Label }
}
if ($UserLines.Count) {
    Test-UserCode '\b0x10[0-9a-fA-F]{6}\b'                        'raw guest address outside layout/'
    Test-UserCode '\br(d8|d16|d32|d64|f32|f64)\s*\(\s*[0-9]'      'memory read at a numeric offset'
    Test-UserCode '\bw(r8|w16|r16|w32|r32|w64|r64|f32|f64)\s*\(\s*[0-9]' 'memory write at a numeric offset'
    Test-UserCode '\bgoto\s+\w'                                   'goto'
    Test-UserCode '\bf_[0-9a-f]{8}\s*\('                          'direct call to a generated entry'
    Test-UserCode '\brt_orig_'                                    'call to a wrapped original'
    Test-UserCode '\b(TODO|FIXME|XXX|NotImplemented|not implemented|stub)\b' 'unfinished marker'
    Test-UserCode '\{\s*\}'                                       'empty body'
    if (@($UserLines | Where-Object { $_ -match '\bif\s*\(|\bfor\s*\(|\bwhile\s*\(|\bswitch\s*\(|\+=|-=|\*=|/\||&&|\|\||[a-z_]+\s*[=!<>]=' }).Count -eq 0) {
        Add-GateResult $false 'readable' 'no logic of its own: the body is a pass-through with no condition, loop or computation'
    } else {
        Add-GateResult $true 'readable' 'the body has logic of its own'
    }
}

# ---------------------------------------------------------------- names.csv registration
$NamesPath = Join-Path $RepoRoot 'cow\names.csv'
$NamesRows = @()
if (Test-Path $NamesPath) { $NamesRows = @(Import-Csv -Path $NamesPath) }
$Known = @{}
foreach ($N in $NamesRows) { if ($N.name) { $Known[$N.name] = $N.confidence } }
$Used = New-Object System.Collections.Generic.HashSet[string]
foreach ($Line in $UserLines) {
    foreach ($M in [regex]::Matches($Line, '\b(cow_[a-z0-9_]+|Cow[A-Za-z0-9_]+|COW_[A-Z0-9_]+)\b')) {
        [void]$Used.Add($M.Value)
    }
}
$Unregistered = @($Used | Where-Object { -not $Known.ContainsKey($_) -and $_ -ne ('cow_adapter_' + $Hex) })
if ($Unregistered.Count) { Add-GateResult $false 'names' ("not in cow/names.csv: " + ($Unregistered -join ', ')) }
else { Add-GateResult $true 'names' ("{0} identifier(s) registered" -f $Used.Count) }

$TodoPath = Join-Path $RepoRoot 'docs\cow\NAMES_TODO.md'
$Open = @($NamesRows | Where-Object { $_.confidence -in @('guess','placeholder') })
if (-not (Test-Path $TodoPath)) { Add-GateResult $false 'names' 'docs/cow/NAMES_TODO.md missing (run status.py)' }
else {
    $TodoText = Get-Content -Path $TodoPath -Raw
    $Missing = @($Open | Where-Object { $TodoText -notmatch [regex]::Escape($_.name) })
    if ($Missing.Count) { Add-GateResult $false 'names' ("open name(s) absent from NAMES_TODO.md: " + (($Missing | ForEach-Object { $_.name }) -join ', ')) }
    else { Add-GateResult $true 'names' ("{0} guess/placeholder(s) listed" -f $Open.Count) }
}

# ---------------------------------------------------------------- cowdiff
$CowdiffJson = $null
$Py = (Get-Command python -ErrorAction SilentlyContinue)
if (-not $Py) { Add-GateResult $false 'cowdiff' 'python not on PATH' }
else {
    $Raw = & $Py.Source 'tools\cow\cowdiff.py' $Entry '--json' 2>&1
    $Line = @($Raw | ForEach-Object { "$_".Trim() } | Where-Object { $_ -like '{*}' })[0]
    if ($Line) {
        try { $CowdiffJson = $Line | ConvertFrom-Json } catch { Add-GateResult $false 'cowdiff' "unparseable --json output: $_" }
    }
    if ($CowdiffJson) {
        if (-not $CowdiffJson.pass) {
            Add-GateResult $false 'cowdiff' ("{0} mismatch(es), first at state {1} ({2})" -f `
                $CowdiffJson.mismatches, $CowdiffJson.first_state, $CowdiffJson.reason)
        } else {
            Add-GateResult $true 'cowdiff' ("states={0} blocks={1}/{2}" -f $CowdiffJson.states, `
                $CowdiffJson.blocks, $CowdiffJson.blocks_total)
            $UnreachedPath = Join-Path $RepoRoot ("cow\unreached\{0}.txt" -f $Hex)
            if ($CowdiffJson.blocks -ne $CowdiffJson.blocks_total) {
                if (Test-Path $UnreachedPath) {
                    Add-GateResult $true 'coverage' ("short list recorded in cow/unreached/{0}.txt" -f $Hex)
                } else {
                    Add-GateResult $false 'coverage' ("{0} of {1} instructions unreached and cow/unreached/{2}.txt does not exist (cowdiff.py {2} --write-unreached --reason '...')" -f `
                        $CowdiffJson.blocks, $CowdiffJson.blocks_total, $Hex)
                }
            } else {
                Add-GateResult $true 'coverage' 'every generated instruction reached'
            }
        }
    } elseif ($CowdiffJson -eq $null) {
        Add-GateResult $false 'cowdiff' ("no json from cowdiff.py: " + (($Raw | Select-Object -Last 2) -join ' | '))
    }
}

# ---------------------------------------------------------------- build and the upstream tests
if ($SkipBuild) { Add-GateResult $true 'build' 'skipped (-SkipBuild); run the full gate before FINISH' }
else {
    $Check = & (Get-Command pwsh -ErrorAction SilentlyContinue).Source -NoProfile -File `
        (Join-Path $PSScriptRoot 'build_check.ps1') -Log (Join-Path $RepoRoot 'build\gate-check.log') 2>&1
    $Failed = @($Check | Where-Object { "$_" -like 'BUILD_CHECK FAIL*' })
    if ($Failed.Count) { Add-GateResult $false 'build' (($Failed | Select-Object -First 1) + ' (see build\gate-check.log)') }
    else { Add-GateResult $true 'build' (($Check | Where-Object { "$_" -like 'BUILD_CHECK PASS*' }) -join ' ') }
}

# ---------------------------------------------------------------- wraps.json must match the ledger
$Gen = & $Py.Source 'tools\cow\genwraps.py' '--check' 2>&1
if ("$Gen" -like '*STALE*') { Add-GateResult $false 'wraps' 'cow/wraps.json or runtime/cow/cow_wraps.c is stale (genwraps.py)' }
else { Add-GateResult $true 'wraps' 'cow/wraps.json matches the ledger' }

$Bad = @($Results | Where-Object { -not $_.ok })
if ($Json) { $Results | ConvertTo-Json -Compress | Write-Output }
if ($Bad.Count) {
    Write-Output ("GATE VERDICT FAIL {0} ({1} check(s) failed: {2})" -f $Hex, $Bad.Count, (($Bad | ForEach-Object { $_.check }) -join ', '))
    exit 1
}
Write-Output ("GATE VERDICT PASS {0} ({1} checks)" -f $Hex, $Results.Count)
exit 0
