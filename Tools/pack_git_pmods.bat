call config.bat

del /q "%client_git_path%"

for /d %%i in ("pmod_*") do (

@echo "..\%%i\*.*" "..\..\..\*.*" >.\pack\filelist.txt
.\pack\UnrealPak.exe "%client_git_path%\%%i.pak" -create="filelist.txt" -compress

XCOPY /S /Y ".\pack\template.sig" "%client_git_path%\"
ren "%client_git_path%\template.sig" "%%i.sig"
del /q "%client_git_path%\template.sig"
)

del /q "%server_git_path%"
XCOPY /S /Y "%client_git_path%\" "%server_git_path%\"