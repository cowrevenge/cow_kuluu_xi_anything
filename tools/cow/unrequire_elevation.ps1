# Stop the launcher's UAC prompt without touching anybody's binary.
#
# Anything whose embedded manifest says requestedExecutionLevel='requireAdministrator' is started by
# Windows on the secure desktop with a consent box. Nobody is there to press it, so the Phoenix
# launcher's PLAY fails with 'Game launch error: Failed to start game: UAC cancelled (1223)' after
# ~123 s. tools/cow/scan_elevation.py finds them by asking Windows for each exe's manifest:
#
#   [ADMIN] C:\PhoenixXI\Ashita-cli.exe                                   <- the launcher spawns this
#   [ADMIN] C:\PhoenixXI\SquareEnix\PlayOnlineViewer\pol.exe              <- the POL chain
#   [ADMIN] C:\PhoenixXI\SquareEnix\PlayOnlineViewer\polcfg\polcfg.exe
#   [ADMIN] C:\PhoenixXI\SquareEnix\PlayOnlineViewer\util\startpol.exe
#   [ok   ] C:\PhoenixXI\bootloader\phoenix-loader.exe (asInvoker already)
#
# HKCU\Software\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Layers is a per-user shim list
# that needs no admin; '~ RUNASINVOKER' makes Windows start that exe as the calling user. No binary
# is edited, no machine-wide security setting (PromptOnSecureDesktop / ConsentPromptBehaviorAdmin)
# is weakened, and -Revert puts it back.
#
#   pwsh -File tools\cow\unrequire_elevation.ps1            # apply
#   pwsh -File tools\cow\unrequire_elevation.ps1 -Show      # show current layers
#   pwsh -File tools\cow\unrequire_elevation.ps1 -Revert    # remove our entries

[CmdletBinding()]
param(
    [string[]]$Exes = @(
        'C:\PhoenixXI\Ashita-cli.exe',
        'C:\PhoenixXI\SquareEnix\PlayOnlineViewer\pol.exe',
        'C:\PhoenixXI\SquareEnix\PlayOnlineViewer\polcfg\polcfg.exe',
        'C:\PhoenixXI\SquareEnix\PlayOnlineViewer\util\startpol.exe',
        'C:\PhoenixXI\bootloader\phoenix-loader.exe'
    ),
    [switch]$Revert,
    [switch]$Show
)

$ErrorActionPreference = 'Stop'
$key = 'HKCU:\Software\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Layers'
if (-not (Test-Path $key)) { New-Item -Force -Path $key | Out-Null }

function Show-Layers {
    (Get-Item $key).GetValueNames() | Where-Object { $_ -like 'C:\PhoenixXI*' } |
        ForEach-Object { '  {0} = {1}' -f $_, (Get-ItemProperty -Path $key).$_ }
}

if ($Show) { Show-Layers; return }

$log = Join-Path (Split-Path -Parent (Split-Path -Parent (Split-Path -Parent $PSCommandPath))) 'build\elevation-changes.txt'
New-Item -ItemType Directory -Force -Path (Split-Path -Parent $log) | Out-Null

foreach ($e in $Exes) {
    if (-not (Test-Path $e)) { Write-Host "skip (missing): $e" -ForegroundColor Yellow; continue }
    if ($Revert) {
        try { Remove-ItemProperty -Path $key -Name $e -ErrorAction Stop
              Write-Host "reverted  $e"
              "{0}  reverted  {1}" -f (Get-Date -Format 's'), $e | Add-Content -Path $log }
        catch { Write-Host "nothing set for $e" }
        continue
    }
    New-ItemProperty -Path $key -Name $e -Value '~ RUNASINVOKER' -PropertyType String -Force | Out-Null
    Write-Host "RUNASINVOKER -> $e"
    "{0}  RUNASINVOKER  {1}" -f (Get-Date -Format 's'), $e | Add-Content -Path $log
}

Write-Host "`ncurrent layers under $key"
Show-Layers
