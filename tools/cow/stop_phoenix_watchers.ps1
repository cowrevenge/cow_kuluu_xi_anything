# Stop the stand-in's watcher and any client/launcher, so a restore actually sticks.
#
# The game folder's FFXiMain.dll is re-applied by watch-swap.ps1 within 250 ms, so putting the
# retail file back only works after that watcher is gone. This kills the watcher processes (found
# by their command line, not by name, so it never touches the shell running this script), the
# launcher, and any client, then reports what is left.
#
#   pwsh -File tools\cow\stop_phoenix_watchers.ps1

$ErrorActionPreference = 'Continue'

function Stop-ByPid([int]$Pid_, [string]$why) {
    $ok = python -c "import ctypes,sys
k=ctypes.windll.kernel32
h=k.OpenProcess(1|0x1000,False,int(sys.argv[1]))
print('killed' if h and k.TerminateProcess(h,0) else ('open-failed' if not h else 'terminate-failed'))" $Pid_ 2>&1
    Write-Host ("  pid {0,-8} {1,-28} {2}" -f $Pid_, $why, ($ok -join ' '))
}

Write-Host '== watchers =='
$watchers = Get-CimInstance Win32_Process | Where-Object {
    $_.Name -match 'pwsh|powershell' -and $_.CommandLine -match 'watch-swap' -and $_.ProcessId -ne $PID
}
if (-not $watchers) { Write-Host '  none running' }
foreach ($p in $watchers) { Stop-ByPid $p.ProcessId 'watch-swap' }

Write-Host '== launcher / clients =='
foreach ($n in 'phoenix-launcher', 'phoenix-loader', 'xiloader', 'Ashita-cli', 'FFxiMain', 'pol', 'host64') {
    foreach ($p in (Get-Process -Name $n -ErrorAction SilentlyContinue)) { Stop-ByPid $p.Id $n }
}

Start-Sleep -Seconds 2
Write-Host '== still alive =='
$left = Get-Process -Name phoenix-launcher, phoenix-loader, xiloader, Ashita-cli, FFxiMain, pol, host64 -ErrorAction SilentlyContinue
$watch2 = Get-CimInstance Win32_Process | Where-Object { $_.CommandLine -match 'watch-swap' -and $_.ProcessId -ne $PID }
if (-not $left -and -not $watch2) { Write-Host '  clean' } else {
    $left | ForEach-Object { Write-Host ("  process {0} pid {1}" -f $_.ProcessName, $_.Id) }
    $watch2 | ForEach-Object { Write-Host ("  watcher pid {0}: {1}" -f $_.ProcessId, $_.CommandLine.Substring(0, [Math]::Min(90, $_.CommandLine.Length))) }
}

Write-Host '== who holds the game DLL =='
python (Join-Path (Split-Path -Parent (Split-Path -Parent $PSCommandPath)) 'tools\cow\who_locks.py')
