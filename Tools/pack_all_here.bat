call config.bat


for /d %%i in ("pmod\pmod_*") do (

@echo "..\%%i\*.*" "..\..\..\*.*" >.\pack\filelist.txt
.\pack\UnrealPak.exe "..\%%~ni.pak" -create="filelist.txt" -compress

)
