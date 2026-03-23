@echo off
set EXE_PATH=Debug\data_structure_G1.exe
set EXE_PATH_64=x64\Debug\data_structure_G1.exe

if exist "%EXE_PATH%" (
    echo [Lancement de l'application (Win32)...]
    "%EXE_PATH%"
) else if exist "%EXE_PATH_64%" (
    echo [Lancement de l'application (x64)...]
    "%EXE_PATH_64%"
) else (
    echo [ERREUR] Le fichier executable n'a pas ete trouve.
    echo Veuillez d'abord generer la solution dans Visual Studio (Menu Generer -> Generer la solution).
    echo Chemin attendu : %EXE_PATH% ou %EXE_PATH_64%
    pause
)
