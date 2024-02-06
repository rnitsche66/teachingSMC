% Init Script for the FFT first steps
fprintf('initalizing FFT4dSpace ')
Ts =1e-3; % 16kHz Sampling Time

NFFT2 = 2^10;

% Parameters of the sin waves:
% (1) ************************
mdlPara.Bias1 = 0;      % [-]
mdlPara.a1 = 2;         % [-]
mdlPara.om1 = 2*pi*100; % (rad/sec)

% Parameters of the sin waves:
% (2) ************************
mdlPara.Bias2 = 0;      % [-]
mdlPara.a2 = 1;         % [-]
mdlPara.om2 = 2*pi*300; % (rad/sec)

fprintf(' done.\n')