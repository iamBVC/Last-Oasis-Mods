call config.bat

del /q "%server_path%\pmod"

for /d %%i in ("pmod_*") do (

@echo "..\%%i\*.*" "..\..\..\*.*" >.\pack\filelist.txt
.\pack\UnrealPak.exe "%server_path%\pmod\%%i.pak" -create="filelist.txt" -compress

XCOPY /S /Y ".\pack\template.sig" "%server_path%\pmod\"
ren "%server_path%\pmod\template.sig" "%%i.sig"
del /q "%server_path%\pmod\template.sig"
)
