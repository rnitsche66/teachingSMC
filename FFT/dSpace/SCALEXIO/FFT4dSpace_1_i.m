 % ---------------------------------------------------------------------
% TITLE:  FFT4dSpace1_i.m
% ---------------------------------------------------------------------
%
% DESCRIPTION:
%  This is the initialization file for the VEAE Controller in a dSpace
%  environment for Clarissa for VEAE Controller to investigate and mitigate
%  squezing
%  
% -----------------------------------------------------------------------
%
% DATE OF CREATION:
% 16.10.2023, Rainer Nitsche
% 
% -----------------------------------------------------------------------

% ----------------------------------------------------------------------
% HISTORY:
% 16.10.2023, nitr: copy from # 1
%             
% ----------------------------------------------------------------------

close all
% clc
% other m-files for initialization
% if one ueses rmlExtCodeGen('VEAEctrlF2d_3.slx','VEAEctrlF2d_3_i.m'), the
% following pathes are not set to the new Matlab instance, since only
% parameters and not pathes are handed over to the new Matlab session.
% Workarround: add these pathes to the startup file
% 24.08.2020, nitr
% addpath('./m_files');
% addpath('./m_files/functions');
% addpath('c:/workspace/947_VEAE_piezoController/MATLAB/01_lib/'); % for the new VEAE Controller blocks...

thismFile = mfilename;
fprintf('** Initializing FFT on dSpace for RT-Kolloq.: \n  ') 
fprintf(thismFile); fprintf('.m ** \n');
%% **********************************************************************
Ts = 1/16e3;                    % Abtastzeit [s] -> 16kHz
Ts_1kHz = 1e-3;                 % Higher Order Controller tasks....


mdlPara.sinFreq_Hz_1 = 100;
mdlPara.Asin_1 = 1;
mdlPara.thres4peak = 2e-2; %

% FFT Settings
thresholdFindMax = 0.0002;

disp('done')


% *************************************************************************
return;
% *************************************************************************



