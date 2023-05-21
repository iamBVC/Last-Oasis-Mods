@echo off
setlocal EnableExtensions DisableDelayedExpansion

call config.bat

del /q "%client_git_path%"\pmod

for /d %%i in ("pmod\pmod_*") do (

@echo "..\%%i\*.*" "..\..\..\*.*" >.\pack\filelist.txt
.\pack\UnrealPak.exe "%client_git_path%\pmod\%%~ni.pak" -create="filelist.txt" -compress

XCOPY /S /Y ".\pack\template.sig" "%client_git_path%\pmod\"
ren "%client_git_path%\pmod\template.sig" "%%~ni.sig"
del /q "%client_git_path%\template.sig"
)

del /q "%server_git_path%"
XCOPY /S /Y "%client_git_path%\pmod\" "%server_git_path%\"