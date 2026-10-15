% Command summary goes here
myPath = pwd; % save current path
cd 'C:\workspace\1317_drive_control_HIL' % change to location where repoconfig is
run('ini_RepoConfiguration.m') 
eval(['cd ', myPath]) % go back
clear myPath;
