@echo off
cls

.paket\paket.unity3d.bootstrapper.exe
if errorlevel 1 (
  exit /b %errorlevel%
)

.paket\paket.unity3d.exe %*
