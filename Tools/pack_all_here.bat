call config.bat

if not exist "pakchunk9017-WindowsServer_P\" mkdir pakchunk9017-WindowsServer_P
@echo "..\pakchunk9017-WindowsServer_P\*.*" "..\..\..\*.*" >.\pack\filelist.txt
.\pack\UnrealPak.exe "..\pakchunk9017-WindowsClient_P.pak" -create="filelist.txt" -compress
.\pack\UnrealPak.exe "..\pakchunk9017-WindowsServer_P.pak" -create="filelist.txt" -compress

XCOPY .\pakchunk9017-WindowsServer_P\ .\temp\ /S /Y
XCOPY .\pakchunk9017-WindowsServer_AC\ .\temp\ /S /Y
@echo "..\temp\*.*" "..\..\..\*.*" >.\pack\filelist.txt
.\pack\UnrealPak.exe "..\pakchunk9017-WindowsServer_AC.pak" -create="filelist.txt" -compress
RD /S /Q .\temp\