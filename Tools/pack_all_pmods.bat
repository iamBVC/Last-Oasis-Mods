call config.bat

del /q "%client_path%\pmod"
mkdir "%client_path%\pmod\"

for /d %%i in ("pmod\pmod_*") do (

@echo "..\%%i\*.*" "..\..\..\*.*" >.\pack\filelist.txt
.\pack\UnrealPak.exe "%client_path%\pmod\%%~ni.pak" -create="filelist.txt" -compress


XCOPY /S /Y ".\pack\template.sig" "%client_path%\pmod\"
ren "%client_path%\pmod\template.sig" "%%~ni.sig"
del /q "%client_path%\pmod\template.sig"
)

del /q "%server_path%\pmod"
XCOPY /S /Y "%client_path%\pmod\" "%server_path%\pmod\"