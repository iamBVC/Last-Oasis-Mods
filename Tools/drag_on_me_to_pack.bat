@if "%~1"=="" goto skip

@setlocal enableextensions
@pushd %~dp0
@echo "%~1\*.*" "..\..\..\*.*" >.\pack\filelist.txt
.\pack\UnrealPak.exe "%~1.pak" -create="filelist.txt" -compress
@popd
@pause

:skip