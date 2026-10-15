% Command summary goes here
myPath = pwd;
cd 'C:\workspace\1317_drive_control_HIL'
run('ini_RepoConfiguration.m')
eval(['cd ', myPath])
clear myPath;