# Stop the launcher's UAC prompt without touching anybody's binary.
#
# C:\PhoenixXI\Ashita-cli.exe carries requestedExecutionLevel='requireAdministrator' in its
# manifest, so the Phoenix launcher's "PLAY" spawns it on the secure desktop and the consent box
# nobody is there to press becomes 'UAC cancelled (1223)' after ~123 s. phoenix-loader.exe itself
# is asInvoker, so Ashita is the only thing forcing elevation.
#
# HKCU\Software\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Layers is a per-user shim list
# that needs no admin; '~ RUNASINVOKER' makes Windows start that exe as the calling user, which is
# exactly what xiloader already proved it can do (it logged in fine when started by us).
#
#   pwsh -File tools\cow\unrequire_elevation.ps1            # apply
#   pwsh -File tools\cow\unrequire_elevation.ps1 -Show      # show current layers
#   pwsh -File tools\cow\unrequire_elevation.ps1 -Revert    # remove our entries

[CmdletBinding()]
param(
    [string[]]$Exes = @('C:\PhoenixXI\Ashita-cli.exe', 'C:\PhoenixXI\bootloader\phoenix-loader.exe'),
    [switch]$Revert,
    [switch]$Show
)

$ErrorActionPreference = 'Stop'
$key = 'HKCU:\Software\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Layers'
if (-not (Test-Path $key)) { New-Item -Force -Path $key | Out-Null }

if ($Show) {
    (Get-Item $key).GetValueNames() | ForEach-Object { '  {0} = {1}' -f $_, (Get-ItemProperty -Path $key).$_ }
    return
}

foreach ($e in $Exes) {
    if (-not (Test-Path $e)) { Write-Host "skip (missing): $e" -ForegroundColor Yellow; continue }
    if ($Revert) {
        try { Remove-ItemProperty -Path $key -Name $e -ErrorAction Stop; Write-Host "reverted  $e" }
        catch { Write-Host "nothing set for $e" }
        continue
    }
    New-ItemProperty -Path $key -Name $e -Value '~ RUNASINVOKER' -PropertyType String -Force | Out-Null
    Write-Host "RUNASINVOKER -> $e"
    # record what we did so it can be undone later
    $note = Join-Path (Split-Path -Parent (Split-Path -Parent $PSCommandPath)) 'build\elevation-changes.txt'
    New-Item -ItemType Directory -Force -Path (Split-Path -Parent $note) | Out-Null
    "{0}  {1}  {2}" -f (Get-Date -Format 's'), $(if ($Revert) { 'reverted' } else { 'RUNASINVOKER' }), $e |
        Add-Content -Path $note
}
Write-Host "`ncurrent layers under $key"
(Get-Item $key).GetValueNames() | Where-Object { $_ -like 'C:\PhoenixXI*' } |
    ForEach-Object { '  {0} = {1}' -f $_, (Get-ItemProperty -Path $key).$_ }
