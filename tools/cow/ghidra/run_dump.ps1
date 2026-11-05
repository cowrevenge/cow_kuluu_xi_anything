<#
    run_dump.ps1 - Ghidra headless auto-analysis + decompile of the unpacked client.

      pwsh -NoProfile -File tools/cow/ghidra/run_dump.ps1 -Out C:\ghidra_out\smoke.jsonl -Limit 5 -Only 0x102d9502,0x102da1d8,0x102da2b2
      pwsh -NoProfile -File tools/cow/ghidra/run_dump.ps1 -Out C:\ghidra_out\functions.jsonl

    JAVA_HOME is forced to the Temurin JDK because the machine's PATH java.exe is a Java 8 JRE and
    Ghidra's launch.bat probes PATH first; without the override it picks 1.8 and fails with a
    class-version error that reads like a Ghidra bug.

    The project is KEPT by default. Auto-analysis is the expensive part and it is paid once per
    import, so the smoke test, the 200 pilot and the 19k full dump all reuse it via -process; the
    first run imports and analyses, later ones only re-run the script. -DeleteProject when you want
    a clean room.
#>
param(
    [Parameter(Mandatory = $true)][string] $Out,
    [int] $Limit = 0,
    [string] $Only = '',
    [string] $Ledger = '',
    [string] $ForceReport = '',
    [switch] $DeleteProject,
    [switch] $ForceImport
)

$ErrorActionPreference = 'Stop'
$env:JAVA_HOME = 'C:\Program Files\Eclipse Adoptium\jdk-25.0.3.9-hotspot'
$env:PATH = "$env:JAVA_HOME\bin;$env:PATH"

$ghidra = 'C:\ghidra\ghidra_12.2_PUBLIC'
$projDir = 'C:\ghidra_proj'
$projName = 'cow'
$dll = 'C:\cow_kuluu_xi_anything\generated\FFXiMain.unpacked.dll'
$scripts = 'C:\cow_kuluu_xi_anything\tools\cow\ghidra'
$outDir = Split-Path -Parent $Out

foreach ($d in @($projDir, $outDir)) { if (-not (Test-Path $d)) { New-Item -ItemType Directory -Force $d | Out-Null } }

# Script args go as SEPARATE argv elements after the script name. Ghidra collects everything after
# -postScript up to the next option as the script's own arguments. Collapsing them into one quoted
# token does NOT work: PowerShell re-quotes for cmd, the .bat re-emits %*, and Ghidra then looks for
# a file literally named "CowLiftDump.java C:\...jsonl 5 only:..." and reports Script not found.
$scripts_argv = @()
if ($Ledger) {
    # Force a function at every ledger address FIRST, so the decompile pass below sees all 19k rows
    # and not only what auto-analysis found. -postScript runs in the order it is given, so the order
    # of these two blocks is load-bearing.
    if (-not $ForceReport) { $ForceReport = Join-Path (Split-Path -Parent $Out) 'ledger_force.jsonl' }
    $scripts_argv += @('-postScript', 'CowLedgerForce.java', $Ledger, $ForceReport)
}

$sargs = @('CowLiftDump.java', $Out)
if ($Limit -gt 0) { $sargs += "$Limit" }
# One argv element PER address: a comma inside a single token is split by the launcher before it
# reaches the script, which is what made the first smoke test match nothing.
if ($Only) { $sargs += ($Only -split ',' | ForEach-Object { $_.Trim() } | Where-Object { $_ }) }

# Already imported and analysed? Then -process and skip the whole analysis pass.
$imported = Test-Path (Join-Path $projDir "$projName.gpr")
if ($imported -and -not $ForceImport) {
    $mode = @('-process', 'FFXiMain.unpacked.dll')
    Write-Host "mode: -process (reusing the analysed project)"
} else {
    $mode = @('-import', $dll, '-overwrite')
    Write-Host "mode: -import (fresh analysis of $dll)"
}

$log = Join-Path $outDir ("headless_" + (Split-Path -Leaf $Out) + ".log")

# No -cspec: Ghidra takes it from the language's own default in x86.ldefs. Passing the literal
# "default" is rejected outright ("Compiler spec "default" is not supported for language
# x86:LE:32:default") because the id in the ldefs is not what that option looks up.
$argv = @($projDir, $projName) + $mode + @(
    '-processor', 'x86:LE:32:default',
    '-scriptPath', $scripts
) + $scripts_argv + @('-postScript') + $sargs + @(
    '-analysisTimeoutPerFile', '5400',
    '-log', $log
)
if ($DeleteProject) { $argv += '-deleteProject' }

Write-Host "postScripts: $($scripts_argv + @('-postScript') + $sargs -join ' ')"
$sw = [Diagnostics.Stopwatch]::StartNew()
# Piped stdin: support/launch.bat ends in a `pause` on its error path, which under a detached
# Start-Process (no console to answer it) hangs the whole run forever after the JVM has already
# died. One empty line is enough to get past it either way.
'' | & (Join-Path $ghidra 'support\analyzeHeadless.bat') @argv
$code = $LASTEXITCODE
$sw.Stop()
Write-Host ("EXITCODE={0} elapsed={1:N0}s" -f $code, $sw.Elapsed.TotalSeconds)
exit $code
