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
            python tools/cow/setstatus.py $hex --status failed --name '' --file '' --oracle '' --verified false `
                --note 'still unproven: no vtable slot, no caller, no data word' | Out-Null
            Write-Output ("RETRY {0} still unproven" -f $hex)
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
    $mkOut = @(python tools/cow/mkret.py $hex --write --prove --json 2>&1)
    $json = Get-JsonLine $mkOut
    if (-not $json) {
        Write-Output ("CHAIN {0} NOT-A-RET: {1}" -f $hex, (($mkOut | Select-Object -Last 2) -join ' / '))
        break
    }
    $mk = $json | ConvertFrom-Json
    if (-not $mk.proven) {
        python tools/cow/setstatus.py $hex --status failed --name '' --file '' --oracle '' --verified false `
            --note 'unproven: no vtable slot and no call/jmp/push reaches it - a stub, not read' | Out-Null
        Write-Output ("CHAIN {0} UNPROVEN (booked failed)" -f $hex)
        $j = python tools/cow/loopy/loopy.py next | Out-String | ConvertFrom-Json
        $hex = $j.entry
        continue
    }
    $sub = python tools/cow/loopy/loopy.py submit $hex --name $mk.name --confidence $mk.confidence `
        --file $mk.file --oracle $mk.oracle | Out-String | ConvertFrom-Json
    Write-Output ("UNIT {0} {1} {2} [{3}] {4}" -f $hex, $sub.verdict, $mk.name, $mk.kind, $sub.pushed)
    if ($sub.verdict -notlike 'DONE*') {
        Write-Output ("CHAIN STOP: {0} -> {1}" -f $hex, $sub.verdict)
        foreach ($g in @($sub.gate)) { Write-Output ("   {0}" -f $g) }
        break
    }
    $hex = $sub.next_unit.entry
}
