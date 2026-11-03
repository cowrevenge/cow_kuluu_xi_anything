<#
    gate_batch.ps1 - run the gate over several entries and keep only the verdicts.

    The loop uses this when it has a run of cheap units (a batch of bare `ret` leaves, say) and does
    not want four shells: each entry still goes through the full gate, and the exit code is 1 if any
    of them fails.

        pwsh -NoProfile -File tools/cow/gate_batch.ps1 -Entries 0x1000bb10,0x1000bb20 -SkipBuild
        pwsh -NoProfile -File tools/cow/gate_batch.ps1 -Next 4 -Full
#>
[CmdletBinding()]
param(
    [string] $Entries = '',
    [int] $Next = 0,
    [switch] $SkipBuild,
    [switch] $Json
)

$ErrorActionPreference = 'Stop'
$RepoRoot = (Resolve-Path (Join-Path $PSScriptRoot '..\..')).Path
Set-Location $RepoRoot
$Py = (Get-Command python -ErrorAction SilentlyContinue)
if (-not $Py) { Write-Output 'GATE_BATCH FAIL python is not on PATH'; exit 1 }

$List = @()
if ($Entries) { $List = @($Entries -split ',' | ForEach-Object { $_.Trim() } | Where-Object { $_ }) }
if ($Next -gt 0) {
    $picked = & $Py.Source 'tools\cow\next.py' --limit $Next --json | ConvertFrom-Json
    $List = @($List) + @($picked.next | ForEach-Object { $_.entry })
}
if (-not $List) { Write-Output 'GATE_BATCH FAIL nothing to gate (pass -Entries or -Next)'; exit 1 }

$Failed = @()
foreach ($Entry in $List) {
    $Args = @('-NoProfile', '-File', (Join-Path $PSScriptRoot 'gate.ps1'), $Entry)
    if ($SkipBuild) { $Args += '-SkipBuild' }
    if ($Json) { $Args += '-Json' }
    $Out = & (Get-Command pwsh).Source @Args 2>&1
    $Verdict = @($Out | ForEach-Object { "$_" } | Where-Object { $_ -like 'GATE VERDICT*' })
    $Bad = @($Out | ForEach-Object { "$_" } | Where-Object { $_ -like 'GATE FAIL*' })
    if ($Verdict.Count -and $Verdict[0] -like '*PASS*') {
        Write-Output ("GATE_BATCH {0}  {1}" -f $Entry, $Verdict[0])
    } else {
        Write-Output ("GATE_BATCH {0}  {1}" -f $Entry, ($Verdict[0]))
        foreach ($b in $Bad) { Write-Output ("    {0}" -f $b) }
        $Failed += $Entry
    }
}
if ($Failed.Count) { Write-Output ("GATE_BATCH VERDICT FAIL ({0}/{1}): {2}" -f $Failed.Count, $List.Count, ($Failed -join ' ')); exit 1 }
Write-Output ("GATE_BATCH VERDICT PASS ({0} unit(s))" -f $List.Count)
exit 0
