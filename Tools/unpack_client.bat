call config.bat
@echo=off
for /r %client_path% %%a in (*.pak) do call :process "%%a"


:process
::echo Processing %1 ...
.\unpack\UnrealPak.exe %1 "..\Last_Oasis_Client" -cryptokeys="Crypto.json" -Extract -extracttomountpoint