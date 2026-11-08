@echo off
rem run_dump.cmd - Ghidra headless auto-analysis + full decompile of the unpacked client.
rem
rem JAVA_HOME is forced to the Temurin JDK because the machine's PATH java.exe is a Java 8 JRE, and
rem Ghidra's launch.bat probes PATH first - without this override it picks the 1.8 and dies on a
rem class-version error that looks like a Ghidra bug.
rem
rem The DLL is 32-bit x86; the processor is given explicitly so a misread PE header cannot quietly
rem analyse it as something else and produce 19k functions of nonsense.

setlocal
set "JAVA_HOME=C:\Program Files\Eclipse Adoptium\jdk-25.0.3.9-hotspot"
set "PATH=%JAVA_HOME%\bin;%PATH%"

set "GHIDRA=D:\projects\ghidra\ghidra\ghidra_12.2_PUBLIC"
set "PROJ=D:\projects\ghidra\ghidra_proj"
set "SRC=D:\projects\ffxi_disassembly\Cow_kuluu_xi_anything\generated\FFXiMain.unpacked.dll"
set "SCRIPTS=D:\projects\ffxi_disassembly\Cow_kuluu_xi_anything\tools\cow\ghidra"
set "OUT=%1"
if "%OUT%"=="" set "OUT=D:\projects\ghidra\ghidra_out\functions.jsonl"

if not exist "D:\projects\ghidra\ghidra_out" mkdir "D:\projects\ghidra\ghidra_out"

call "%GHIDRA%\support\analyzeHeadless.bat" "%PROJ%" ffxi ^
  -import "%SRC%" ^
  -processor x86:LE:32:default ^
  -cspec default ^
  -overwrite ^
  -scriptPath "%SCRIPTS%" ^
  -postScript CowLiftDump.java "%OUT%" ^
  -analysisTimeoutPerFile 5400 ^
  -log "D:\projects\ghidra\ghidra_out\headless.log"

echo EXITCODE=%ERRORLEVEL%
endlocal
