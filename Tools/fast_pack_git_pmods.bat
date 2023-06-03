call config.bat

cd /d ".\GitPacker"
GitPacker.exe
cd /d "..\"

for %%f in ("pmod\*.pak") do (
XCOPY /S /Y "%%f" "%client_git_path%\pmod\"
del /q "%%f"
XCOPY /S /Y ".\pack\template.sig" "%client_git_path%\pmod\"
ren "%client_git_path%\pmod\template.sig" "%%~nf.sig"
del /q "%client_git_path%\template.sig"
)

del /q "%server_git_path%"
XCOPY /S /Y "%client_git_path%\pmod\" "%server_git_path%\"