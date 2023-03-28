call config.bat

if not exist "pakchunk9017-WindowsServer_P\" mkdir pakchunk9017-WindowsServer_P

@echo "..\pakchunk9017-WindowsServer_P\*.*" "..\..\..\*.*" >.\pack\filelist.txt

.\pack\UnrealPak.exe "..\pakchunk9017-WindowsServer_P.pak" -create="filelist.txt" -compress

move pakchunk9017-WindowsServer_P.pak %server_path%

if exist %server_path%\pakchunk9017-WindowsServer_AC.pak DEL %server_path%\pakchunk9017-WindowsServer_AC.pak
if exist %server_path%\pakchunk9017-WindowsServer_KOTH.pak DEL %server_path%\pakchunk9017-WindowsServer_KOTH.pak