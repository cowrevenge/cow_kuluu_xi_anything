# One clean, unattended launcher attempt.
#
# Kills any client/launcher left over (the launcher's PLAY button goes to 'PLAYING...' while a
# session is registered, which silently swallows the next press), makes sure the game folder holds
# OUR current build, then starts the launcher with the stand-in's dialog suppressed - under
# automation nobody is there to press OK on the error box, and while it is up the guest lock is
# held forever. Then presses PLAY and reports what happened.
#
#   pwsh -File tools\cow\launch_once.ps1                 # press PLAY, wait, report
#   pwsh -File tools\cow\launch_once.ps1 -Wait 120

[CmdletBinding()]
param(
    [int]$Wait = 80,
    [string]$GameDll = 'C:\PhoenixXI\SquareEnix\FINAL FANTASY XI\FFXiMain.dll',
    [string]$Build = 'D:\projects\ffxi_disassembly\Cow_kuluu_xi_anything\build\host\FFXiMain.dll',
    [string]$Log = 'C:\PhoenixXI\SquareEnix\FINAL FANTASY XI\FFXiMain.recomp.log'
)

$ErrorActionPreference = 'Continue'
$root = Split-Path -Parent (Split-Path -Parent (Split-Path -Parent $PSCommandPath))  # repo root

foreach ($n in 'phoenix-loader', 'Ashita-cli', 'xiloader', 'FFxiMain', 'pol', 'phoenix-launcher') {
    $found = Get-Process -Name $n -ErrorAction SilentlyContinue
    foreach ($q in $found) {
        python -c "import ctypes,sys;k=ctypes.windll.kernel32;h=k.OpenProcess(1|0x1000,False,int(sys.argv[1]));k.TerminateProcess(h,0) if h else None" $q.Id 2>$null
    }
    if ($found) { Write-Host "killed leftover $n ($($found.Id -join ','))" }
}
Start-Sleep -Seconds 3

$want = (Get-FileHash -Algorithm SHA256 $Build).Hash.ToLower()
$ok = $false
for ($i = 0; $i -lt 14; $i++) {
    $have = (Get-FileHash -Algorithm SHA256 $GameDll).Hash.ToLower()
    if ($have -eq $want) { $ok = $true; break }
    try { Copy-Item $Build $GameDll -Force -ErrorAction Stop; $ok = $true; break }
    catch { Start-Sleep -Milliseconds 700 }
}
Write-Host ("game folder stand-in: {0}  sha {1}" -f $(if ($ok) { 'ours' } else { 'MISMATCH' }), $want.Substring(0, 12))

if (Test-Path $Log) { Remove-Item $Log -Force -ErrorAction SilentlyContinue }

$env:FFXI_RECOMP_NO_DIALOG = '1'
Start-Process 'C:\Users\Owner\AppData\Local\Phoenix Launcher\phoenix-launcher.exe' `
    -WorkingDirectory 'C:\Users\Owner\AppData\Local\Phoenix Launcher'
Start-Sleep -Seconds 30
$p = (Get-Process phoenix-launcher -ErrorAction SilentlyContinue | Select-Object -First 1).Id
if (-not $p) { Write-Host 'launcher did not start'; exit 1 }
Write-Host "launcher pid=$p"
& pwsh -NoProfile -File (Join-Path $root 'tools\cow\phoenix_uia.ps1') -Press 'PLAY' -ProcId $p

$deadline = (Get-Date).AddSeconds($Wait)
$seen = $null
while ((Get-Date) -lt $deadline) {
    Start-Sleep -Seconds 5
    $c = Get-Process phoenix-loader, Ashita-cli, FFxiMain -ErrorAction SilentlyContinue | Select-Object -First 1
    if ($c) { $seen = $c; break }
}
if ($seen) { Write-Host "client running: $($seen.ProcessName) pid $($seen.Id) title='$($seen.MainWindowTitle)'" }
else { Write-Host 'no client process appeared' }

Start-Sleep -Seconds 15
Write-Host "`n### $Log"
if (Test-Path $Log) {
    Get-Content $Log -TotalCount 30
    Write-Host '   ... tail ...'
    Get-Content $Log -Tail 22
}
else { Write-Host '(no log written yet)' }

Write-Host "`n### launcher log"
$ll = Join-Path $env:LOCALAPPDATA 'com.phoenixxi.launcher\logs\phoenix-launcher.log'
Get-Content $ll -Tail 5
