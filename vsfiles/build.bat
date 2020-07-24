@echo off

:: Let the visual studio developer command prompt handle all environement variables
call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\Tools\VSDevCmd.bat" > nul

:: variable for all source files
set "files="

:: additional include and library paths
set SFML_INCLUDE=%~dp0..\sfml\include
set SFML_LIB=%~dp0..\sfml\lib

set "LIB=%LIB%%sfml_lib%"

setlocal enabledelayedexpansion

pushd %~dp0..\src
for %%f in (*.cpp) do set "files=!files!..\src\%%f "
popd

pushd %~dp0..\obj
cl /EHsc /analyze- /W3 /Zc:wchar_t /MDd /Zi /Zc:inline /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_UNICODE" /D "UNICODE" /I!SFML_INCLUDE! !files! /link /DEBUG /out:%~1
popd

pushd %~dp0..
copy obj\%~1 bin\%~1
popd


endlocal
