@echo off

set "setupDir=%~dp0"
set "version=2.5.1"

setlocal enabledelayedexpansion
    mkdir .vscode
    mkdir sfml
    mkdir bin
    mkdir obj
    mkdir src

    xcopy !setupDir!vsfiles .vscode /q 
    xcopy !setupDir!SFML-!version! sfml /q /e
    xcopy !setupDir!srcfiles src /q 
endlocal
exit /b