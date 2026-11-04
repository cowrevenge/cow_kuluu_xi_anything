<#
    chain.ps1 - the loop's per-unit recipe, in one command, so a unit is only ever booked with proof.

        pwsh -NoProfile -File tools/cow/chain.ps1 -Units 5

    For each unit loopy hands out:

      1. tools/cow/mkret.py --write --prove --json - reads the generated body, refuses anything that is
         not exactly one `ret`, and asks tools/cow/vtable_model.py WHO CALLS the address (a vtable slot,
         which makes it a virtual method, or a call/jmp/push site, which makes it a called leaf). No
         owner means no file: a noop is a stub and the gate refuses stubs (README, Rules).
      2. unproven -> tools/cow/setstatus.py books it `failed` with the reason, and we move on. The
         ledger stays honest: nothing is counted done that we did not read.
      3. proven   -> tools/cow/loopy/loopy.py submit gates it (tools/cow/gate.ps1), books the ledger row,
         refreshes names/wraps/status, makes ONE commit `cow: <hex> <name> [<confidence>]`, fetches and
         pushes to main, and returns the next unit.

    Names come from the evidence: cow_menu_vf2 when the vtable can be named from the vocabulary its own
    slots cite, cow_vf<N>_at_<vtable> when the vtable is real but anonymous, cow_return_at_<hex> for a
    called leaf. None of them are `unk_*`.
#>
[CmdletBinding()]
param(
    [int] $Units = 5,
    [string] $Start = '',
    [int] $RetryFailed = 0
)

$ErrorActionPreference = 'Continue'
$Root = Split-Path -Parent (Split-Path -Parent $PSScriptRoot)   # tools/cow -> repo root
Set-Location -LiteralPath $Root
Write-Output "CHAIN cwd: $(Get-Location)"
$SkipFile = Join-Path $Root 'cow\skip.txt'
if (-not (Test-Path $SkipFile)) { New-Item -ItemType File -Path $SkipFile | Out-Null }
$Stops = 0

function Get-JsonLine([string[]] $Lines) {
    ($Lines | Where-Object { "$_".Trim().StartsWith('{') } | Select-Object -First 1)
}

if ($RetryFailed -gt 0) {
    # Entries the proof refused earlier are not dead: vtable_model has learned more since (a vtable run of
    # two, a data slot, a call site). Try them again, and only book the ones the proof still accepts.
    $rows = Import-Csv ledger\functions.csv | Where-Object {
        $_.status -eq 'failed' -and $_.note -match 'unbooked|unproven|stub' } | Select-Object -First $RetryFailed
    foreach ($r in $rows) {
        $hex = $r.entry
        $mkOut = @(python tools/cow/mkret.py $hex --write --prove --json 2>&1)
        $json = Get-JsonLine $mkOut
        if (-not $json) { Write-Output ("RETRY {0} no proof available" -f $hex); continue }
        $mk = $json | ConvertFrom-Json
        if (-not $mk.proven) {
            python tools/cow/setstatus.py $hex --status thunk --name '' --file '' --oracle '' --verified false `
                --note 'unproven: no vtable slot, no call site, no data word - not reached by anything' | Out-Null
            Write-Output ("RETRY {0} still unproven (booked thunk)" -f $hex)
            continue
        }
        $sub = python tools/cow/loopy/loopy.py submit $hex --name $mk.name --confidence $mk.confidence `
            --file $mk.file --oracle $mk.oracle | Out-String | ConvertFrom-Json
        Write-Output ("RETRY {0} {1} {2} [{3}] {4}" -f $hex, $sub.verdict, $mk.name, $mk.kind, $sub.pushed)
    }
}

$hex = $Start
if (-not $hex) {
    $j = python tools/cow/loopy/loopy.py next | Out-String | ConvertFrom-Json
    $hex = $j.entry
}
for ($i = 0; $i -lt $Units; $i++) {
    if (-not $hex) { Write-Output 'CHAIN: no unit handed out'; break }
    if (Test-Path (Join-Path $Root 'STOP')) { Write-Output 'CHAIN: STOP file present, parking'; break }
    $mkOut = @(python tools/cow/mkret.py $hex --write --prove --json 2>&1)
    $json = Get-JsonLine $mkOut
    if (-not $json) {
        Write-Output ("CHAIN {0} no verdict from mkret: {1}" -f $hex, (($mkOut | Select-Object -Last 2) -join ' / '))
        break
    }
    $mk = $json | ConvertFrom-Json
    if ($mk.proven -and (-not $mk.file -or -not (Test-Path $mk.file))) {
        # Proven, but the original is more than a shape we can say in one line. Park it (next.py honours
        # cow/skip.txt) so the loop keeps moving while the hand-written queue builds up.
        # Before parking, try the accessor generator: `mov eax,[ecx+N] / ret`, `mov [ecx+N],eax / ret` and
        # `lea eax,[ecx+N] / ret` become a named field in layout/structs.h plus one shared body - a real
        # conversion rather than a hand-write.
        $acOut = @(python tools/cow/mkaccessor.py $hex --write --name $mk.name --confidence $mk.confidence `
            --oracle $mk.oracle --json 2>&1)
        $acJson = Get-JsonLine $acOut
        if ($acJson) {
            $ac = $acJson | ConvertFrom-Json
            if ($ac.file -and (Test-Path (Join-Path $Root $ac.file))) {
                $subA = python tools/cow/loopy/loopy.py submit $hex --name $ac.name --confidence $ac.confidence `
                    --file $ac.file --oracle $ac.oracle | Out-String | ConvertFrom-Json
                Write-Output ("UNIT {0} {1} {2} [{3}] {4}" -f $hex, $subA.verdict, $ac.name, $ac.kind, $subA.pushed)
                if ($subA.verdict -like 'DONE*' -or $subA.verdict -eq 'ALREADY-DONE') {
                    $Stops = 0
                    $hex = $subA.next_unit.entry
                    continue
                }
                foreach ($g in @($subA.gate)) { Write-Output ("   {0}" -f $g) }
            }
        }
        if (-not (Test-Path $SkipFile)) { New-Item -ItemType File -Path $SkipFile | Out-Null }
        if (-not ((Get-Content $SkipFile -ErrorAction SilentlyContinue) -contains $hex)) {
            Add-Content -Path $SkipFile -Value $hex -Encoding utf8
        }
        python tools/cow/setstatus.py $hex --status todo | Out-Null
        Write-Output ("CHAIN {0} PARKED needs a hand-written body ({1}) - {2}" -f $hex, $mk.kind, $mk.oracle)
        $j = python tools/cow/loopy/loopy.py next | Out-String | ConvertFrom-Json
        $hex = $j.entry
        continue
    }
    if (-not $mk.proven) {
        # booked the way a thunk is - out of the denominator, with the reason - rather than 'done'.
        python tools/cow/setstatus.py $hex --status thunk --name '' --file '' --oracle '' --verified false `
            --note 'unproven: no vtable slot, no call site, no data word - not reached by anything' | Out-Null
        Write-Output ("CHAIN {0} UNPROVEN (booked thunk: not conversion work)" -f $hex)
        $j = python tools/cow/loopy/loopy.py next | Out-String | ConvertFrom-Json
        $hex = $j.entry
        continue
    }
    $sub = python tools/cow/loopy/loopy.py submit $hex --name $mk.name --confidence $mk.confidence `
        --file $mk.file --oracle $mk.oracle | Out-String | ConvertFrom-Json
    Write-Output ("UNIT {0} {1} {2} [{3}] {4}" -f $hex, $sub.verdict, $mk.name, $mk.kind, $sub.pushed)
    if ($sub.verdict -like 'DONE*' -or $sub.verdict -eq 'ALREADY-DONE') {
        $Stops = 0
        $hex = $sub.next_unit.entry
        continue
    }
    if ($sub.verdict -eq 'HALT' -or "$($sub.why)" -match 'STOP') {
        Write-Output ("CHAIN HALT: {0} -> {1}" -f $hex, $sub.why)
        break
    }
    foreach ($g in @($sub.gate)) { Write-Output ("   {0}" -f $g) }
    $Stops++
    if ($Stops -ge 4) { Write-Output 'CHAIN: 4 non-done units in a row, stopping for a look'; break }
    $j = python tools/cow/loopy/loopy.py next | Out-String | ConvertFrom-Json
    $hex = $j.entry
}
