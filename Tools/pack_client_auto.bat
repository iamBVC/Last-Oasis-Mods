call config.bat

if not exist "pakchunk9017-WindowsServer_P\" mkdir pakchunk9017-WindowsServer_P

@echo "..\pakchunk9017-WindowsServer_P\*.*" "..\..\..\*.*" >.\pack\filelist.txt

.\pack\UnrealPak.exe "..\pakchunk9017-WindowsClient_P.pak" -create="filelist.txt" -compress

move pakchunk9017-WindowsClient_P.pak %client_path%