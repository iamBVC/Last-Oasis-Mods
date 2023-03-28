call config.bat

if not exist ".\temp\" mkdir temp
if not exist "pakchunk9017-WindowsServer_AC\" mkdir pakchunk9017-WindowsServer_AC

XCOPY .\pakchunk9017-WindowsServer_P\ .\temp\ /S /Y

XCOPY .\pakchunk9017-WindowsServer_AC\ .\temp\ /S /Y

@echo "..\temp\*.*" "..\..\..\*.*" >.\pack\filelist.txt

.\pack\UnrealPak.exe "..\pakchunk9017-WindowsServer_AC.pak" -create="filelist.txt" -compress

move pakchunk9017-WindowsServer_AC.pak %server_path%

RD /S /Q .\temp\

if exist %server_path%\pakchunk9017-WindowsServer_P.pak DEL %server_path%\pakchunk9017-WindowsServer_P.pak
if exist %server_path%\pakchunk9017-WindowsServer_KOTH.pak DEL %server_path%\pakchunk9017-WindowsServer_KOTH.pak