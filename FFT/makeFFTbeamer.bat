echo off
echo ****************************************************************
echo TeXen  FFT Beamer Presentation
rem echo Scheint nicht zu funktionieren - von Hand machen!!
rem echo Pfad: o:\pJoint Elektronic Software\Documentation\control\Valve\
echo ****************************************************************


pdflatex FFT4Students.tex
bibtex FFT4Students
pdflatex FFT4Students.tex
pdflatex FFT4Students.tex

del *.aux *.toc *.log *.blg *.snm *.out *.nav


rem *****************************************************************

rem 25.03.2020, NITR
rem /Y   Unterdrückt die Aufforderung zur Bestätigung, dass eine
rem      vorhandene Zieldatei überschrieben werden soll.

rem Beispielhafte Vorlage
rem xcopy .\RSD_1900x_xxxx.pptx \\festo.net\DFS05\DE\Data\Berkheim\VT\ORG_Process_Automation\Dev_Electronics\60_Wissen\CtrlEng\Folien\2018\ /F /D /Y
rem **************************************************************
rem Übergangs-Folienablage
rem xcopy .\VEAEctrlDevelopment.pdf "o:\pJoint Elektronic Software\Documentation\control\Valve\" /F /D /Y
rem xcopy .\VEAEonlineDriftAdaption.pdf "m:\ORG_Robotics\_BC-DS\01_Austausch\nitr\www\ROSE\RT_Berichte\" /F /D /Y
rem xcopy .\VEAEonlineDriftAdaption.pdf "m:\ORG_Robotics\_BC-DS\10_AktuellerStand\" /F /D /Y

rem echo done !

rem rem echo **** Von Hand den Report auch ins Wiki des CB Projektes pJoint Elektronik SW kopieren:
rem rem echo https://adealm01.de.festo.net/cb/dir/4255317
rem rem echo **** 


pause
