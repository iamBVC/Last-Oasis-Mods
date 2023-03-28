@if "%~1" == "" goto skip


.\unpack\UnrealPak.exe "..\%~nx1" "..\%~n1" -cryptokeys="Crypto.json" -Extract -extracttomountpoint
pause

:skip