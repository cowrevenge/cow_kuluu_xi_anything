# Register the PlayOnline polcore COM server for THIS USER ONLY (no admin).
#
# phoenix-loader.exe (xiloader) calls CoCreateInstance for polcore and dies with
# 'Failed to initialize instance of polcore!' because nothing is registered on this machine -
# C:\PhoenixXI\SquareEnix\PlayOnlineViewer\viewer\com does not even exist. The three CLSIDs it
# asks for are compiled into the loader as a raw GUID array (found by tools/cow/find_polcore_clsid.py
# at 0xD232C/0xD233C/0xD234C) and they are exactly the CLSIDs polcore.dll's own registration block
# advertises (POLCore.POLCoreCom.1, ThreadingModel=Apartment).
#
# Everything goes under HKCU\Software\Classes, which a 32-bit process resolves through HKCR, so no
# elevation is needed. Every key we overwrite is exported to build\reg-backup first.
#
#   pwsh -File tools\cow\register_polcore.ps1                     # register
#   pwsh -File tools\cow\register_polcore.ps1 -Unregister         # remove what we added

[CmdletBinding()]
param(
    [string]$DllPath = 'D:\projects\ffxi_disassembly\Cow_kuluu_xi_anything\vendor\polcore\polcore.dll',
    [switch]$Unregister
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent (Split-Path -Parent $PSCommandPath)
$backup = Join-Path (Split-Path -Parent $root) 'build\reg-backup'
New-Item -ItemType Directory -Force -Path $backup | Out-Null

$clsids = @(
    '{07974581-0DF6-4EF0-BD05-604B3ADA9BE9}',
    '{3501F5DD-7894-42df-866A-A2B6527D8049}',
    '{E5966FB3-C97B-42eb-84BF-37F95EE54A9F}'
)
$progids     = @('POLCore.POLCoreCom', 'POLCore.POLCoreCom.1')
$polKeys     = @('HKCU:\Software\PlayOnline', 'HKCU:\Software\PlayOnlineUS', 'HKCU:\Software\PlayOnlineEU')

function Back-Up([string]$keyPath) {
    if (-not (Test-Path $keyPath)) { return }
    $name = ($keyPath -replace '[\\:]', '_') + '-' + (Get-Date -Format 'yyyyMMdd-HHmmss') + '.reg'
    $dst = Join-Path $backup $name
    & reg.exe export ($keyPath -replace ':', '') $dst /y | Out-Null
    if ($LASTEXITCODE -eq 0) { Write-Host "  backed up $keyPath -> $dst" }
    else { Write-Host "  WARN could not export $keyPath (exit $LASTEXITCODE)" -ForegroundColor Yellow }
}

if (-not (Test-Path $DllPath)) { throw "polcore.dll not found at $DllPath" }
$sha = (Get-FileHash -Algorithm SHA256 $DllPath).Hash.ToLower()
Write-Host "polcore.dll $DllPath"
Write-Host "  sha256 $sha"
if ($sha -ne '73b1864bf522d3aa6ec28e9f4bb226fcee956f7f4848a238c9c2d756dc703b06') {
    throw 'polcore.dll on disk does not match the manifest hash - refusing to register'
}

Back-Up 'HKCU:\Software\Classes\CLSID'
foreach ($k in $polKeys) { Back-Up $k }

if ($Unregister) {
    foreach ($c in $clsids) {
        $p = "HKCU:\Software\Classes\CLSID\$c"
        if (Test-Path $p) { Remove-Item -Recurse -Force $p; Write-Host "  removed $p" }
    }
    foreach ($p in $progids) {
        $k = "HKCU:\Software\Classes\$p"
        if (Test-Path $k) { Remove-Item -Recurse -Force $k; Write-Host "  removed $k" }
    }
    return
}

foreach ($c in $clsids) {
    $clsidPath = "HKCU:\Software\Classes\CLSID\$c"
    $inproc = Join-Path $clsidPath 'InprocServer32'
    New-Item -Force -Path $inproc | Out-Null
    Set-ItemProperty -Path $inproc -Name '(default)' -Value $DllPath
    Set-ItemProperty -Path $inproc -Name 'ThreadingModel' -Value 'Apartment'
    Set-ItemProperty -Path $clsidPath -Name '(default)' -Value 'POLCoreCom Class'
    Write-Host "  registered CLSID $c -> $DllPath (Apartment)"
}

foreach ($p in $progids) {
    $k = "HKCU:\Software\Classes\$p"
    New-Item -Force -Path $k | Out-Null
    Set-ItemProperty -Path $k -Name '(default)' -Value 'POLCoreCom Class'
    $cl = Join-Path $k 'CLSID'
    New-Item -Force -Path $cl | Out-Null
    Set-ItemProperty -Path $cl -Name '(default)' -Value $clsids[0]
    Write-Host "  registered ProgID $p"
}

# PlayOnline expects an install path; give polcore somewhere to look so it does not fail early.
$game = 'C:\PhoenixXI\SquareEnix\FINAL FANTASY XI'
$polv = 'C:\PhoenixXI\SquareEnix\PlayOnlineViewer'
foreach ($k in @('HKCU:\Software\PlayOnlineUS\SquareEnix\FINAL FANTASY XI',
                 'HKCU:\Software\PlayOnlineUS\SquareEnix\PlayOnlineViewer',
                 'HKCU:\Software\PlayOnlineEU\SquareEnix\PlayOnlineViewer',
                 'HKCU:\Software\PlayOnline\SQUARE\PlayOnlineViewer')) {
    New-Item -Force -Path $k | Out-Null
    $leaf = Split-Path -Leaf $k
    $target = if ($leaf -eq 'FINAL FANTASY XI') { $game } else { $polv }
    Set-ItemProperty -Path $k -Name 'installpath' -Value $target
    Set-ItemProperty -Path $k -Name 'version' -Value '18349'
    Write-Host "  $k  installpath=$target"
}

Write-Host "`nVerification:"
foreach ($c in $clsids) {
    $inproc = "HKCU:\Software\Classes\CLSID\$c\InprocServer32"
    $v = (Get-ItemProperty -Path $inproc).'(default)'
    $t = (Get-ItemProperty -Path $inproc).ThreadingModel
    Write-Host ("  {0}  -> {1}  ({2})" -f $c, $v, $t)
}
Write-Host 'done'
