call config.bat
@echo=off
for /r F:\Programmi\Steam\steamapps\content\app_903950\depot_903951\Mist\Content\Paks %%a in (*.pak) do call :process "%%a"


:process
::echo Processing %1 ...
.\unpack\UnrealPak.exe %1 "..\Last_Oasis_Client_S5" -cryptokeys="Crypto.json" -Extract -extracttomountpoint