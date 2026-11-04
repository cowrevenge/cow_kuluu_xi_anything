<#
    loop_forever.ps1 - the driver that makes the loop not depend on anybody answering.

        pwsh -NoProfile -File tools/cow/loop_forever.ps1 -Hours 6 -Batch 40

    It calls tools/cow/chain.ps1 over and over until the hours run out, a STOP file appears at the repo
    root, or the queue is genuinely empty. Every pass:

      * loopy hands out the next unit (cow/skip.txt entries - parked bodies that need a hand - are skipped);
      * the proof decides (vtable slot / caller / data word / translation call site), and an entry nothing
        reaches is booked thunk rather than counted as a conversion;
      * tools/cow/gate.ps1 is the only judge; on PASS loopy books the ledger row, refreshes names, wraps
        and the status docs, makes ONE commit `cow: <hex> <name> [<confidence>]`, fetches and pushes;
      * every -Review-Every passes (default 3) the review pass runs over the recent batch, and every 5th
        pass the entries the proof refused earlier get retried, because the proof has learned more since.

    Nothing here decides anything the gate does not already enforce; it just keeps the queue moving.
#>
[CmdletBinding()]
param(
    [int] $Hours = 6,
    [int] $Batch = 40,
    [int] $ReviewEvery = 3
)

$Root = Split-Path -Parent (Split-Path -Parent $PSScriptRoot)
Set-Location -LiteralPath $Root
$end = (Get-Date).AddHours($Hours)
$pass = 0
$empty_streak = 0
Write-Output "FOREVER start $(Get-Date -Format s) until $($end.ToString('s')) (batch $Batch, review every $ReviewEvery)"

while ((Get-Date) -lt $end) {
    if (Test-Path (Join-Path $Root 'STOP')) { Write-Output "FOREVER: STOP file present at $(Get-Date -Format s)"; break }
    $pass++
    $done_before = (Import-Csv ledger\functions.csv | Where-Object { $_.status -eq 'done' }).Count
    Write-Output "=== PASS $pass at $(Get-Date -Format s) (done $done_before)"
    & (Join-Path $PSScriptRoot 'chain.ps1') -Units $Batch

    $after = (Import-Csv ledger\functions.csv | Where-Object { $_.status -eq 'done' }).Count
    if ($after -eq $done_before) { $empty_streak++ } else { $empty_streak = 0 }
    if ($empty_streak -ge 3) { Write-Output 'FOREVER: 3 passes with no progress, stopping for a look'; break }

    $state = Get-Content cow\loop_state.json -Raw | ConvertFrom-Json
    if ($state.done_since_review -ge 50 -or ($ReviewEvery -gt 0 -and $pass % $ReviewEvery -eq 0)) {
        Write-Output '=== REVIEW PASS'
        python tools/cow/review_pass.py --recent 60 --apply --gate 2 2>&1 | Select-Object -Last 8
    }
    if ($pass % 5 -eq 0) {
        Write-Output '=== RETRY the entries the proof refused earlier'
        & (Join-Path $PSScriptRoot 'chain.ps1') -RetryFailed 20 -Units 0
    }
    Start-Sleep -Seconds 5
}
Write-Output "FOREVER end $(Get-Date -Format s) after $pass pass(es)"
