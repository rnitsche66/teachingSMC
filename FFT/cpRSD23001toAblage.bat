echo off
echo *************************************************************************
echo Kopieren RSD_24001*.pptx zur Folienablage von BC-DS
echo ************************************************************************

rem 23.05.2019, NITR
rem /Y   Unterdrückt die Aufforderung zur Bestätigung, dass eine
rem      vorhandene Zieldatei überschrieben werden soll.

rem Beispielhafte Vorlage
rem xcopy .\RSD_1900x_xxxx.pptx \\festo.net\DFS05\DE\Data\Berkheim\VT\ORG_Process_Automation\Dev_Electronics\60_Wissen\CtrlEng\Folien\2018\ /F /D /Y
rem **************************************************************
rem CB-Folienablage für BC-DS
xcopy .\RSD_24001_*.pptx "m:\ORG_Robotics\_BC-DS\04_RSDfolien\2024\" /F /D /Y

rem SprintDemo- Ablage Die muss man noch anpassen....
rem xcopy .\*_RSD21001.pptx "o:\pCobot_650\00_Agile Product Development\01_PI overview\2020_PI1\Sprint 4\" /F /D /Y

echo done !
pause
