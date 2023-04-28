call config.bat

del /q "%client_path%\pmod"

for /d %%i in ("pmod_*") do (

@echo "..\%%i\*.*" "..\..\..\*.*" >.\pack\filelist.txt
.\pack\UnrealPak.exe "%client_path%\pmod\%%i.pak" -create="filelist.txt" -compress

mkdir "%client_path%\pmod\"
XCOPY /S /Y ".\pack\template.sig" "%client_path%\pmod\"
ren "%client_path%\pmod\template.sig" "%%i.sig"
del /q "%client_path%\pmod\template.sig"
)

del /q "%server_path%\pmod"
XCOPY /S /Y "%client_path%\pmod\" "%server_path%\pmod\"