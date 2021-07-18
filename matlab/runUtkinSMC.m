% Run the simulation of the Utkin Example
%
% 15.07.2021, nitr

mdl = 'UtkinExampleFromSMCroadMapIntro.slx';
% Simulate the model
sim(mdl)

% get the names and variables
for i = 1:logsout.numElements
 eval([logsout{i}.Name,' = logsout{',num2str(i),'}.Values.Data;']);
end

time = logsout{1}.Values.Time;

% Now we can plot
% ************************************************************************
figure(10)
lw = 1.5;
plot(time, x1,'Linewidth', lw)
hold on 
 plot(time, sf,'Linewidth', lw)
hold off

grid on 
legend('x1',...
    'sliding surface'...
    );
title('Sliding Mode Control')
ylabel('Sliding surface - x1')
xlabel('time [sec]')

axis([0 8 -0.2 1.2])


fnPDF='SMCutkinRoadmap.pdf';
%% Paper Position
xcorner = 16;
ycorner = 12;
set(gcf, 'PaperType', 'a4letter');
set(gcf, 'PaperUnits', 'centimeters');
set(gcf, 'PaperPosition', [0.0 0.0 xcorner ycorner])
wysiwyg
set(gcf, 'PaperSize', [xcorner ycorner])
clear xcorner ycorner
print(gcf, '-dpdf', ['../pictures/', fnPDF]);

