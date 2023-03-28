call config.bat
@echo=off
for /r %server_path% %%a in (*.pak) do call :process "%%a"


:process
::echo Processing %1 ...
.\unpack\UnrealPak.exe %1 "..\Last_Oasis_Server" -cryptokeys="Crypto.json" -Extract -extracttomountpoint