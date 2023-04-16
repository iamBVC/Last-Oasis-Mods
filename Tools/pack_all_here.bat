call config.bat


for /d %%i in ("pmod_*") do (

@echo "..\%%i\*.*" "..\..\..\*.*" >.\pack\filelist.txt
.\pack\UnrealPak.exe "..\%%i.pak" -create="filelist.txt" -compress

)
