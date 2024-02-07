% Nach dem Simulieren des Models FFT4dSpace.slx könne mit diesemm Script
% das FFT Datenspektrum geplottet werden.

% nitr; 02.02.2024


matFFT = out.Ampli;
clear t

% *******************************************
% Umsortieren für einen 3 D Plot
% *******************************************
% Anzahl der Zeitfenster kann man ausrechnen:
% 1sec / (1024*Ts) ; simTime = 1 sec; Ts = 6.25e-5;
%  => 16 Pakete bei 1 Sekunde...
for i = 1:length(matFFT(1,1,:))
    % t(i) = i;
    t(i,:) = matFFT(:,i);
end


% ******************************************************
figure(10); mesh(t)
xlabel('Index k')
ylabel('Runs')
zlabel('|X(k)|')
f_vec = [0:1:length(matFFT(:,1))-1]*1/Ts/length(matFFT);

LW=1.5;

% ***********************************************
% Ein FFT block plotten
% ***********************************************
figure(100); 
plot(f_vec,matFFT(:,4),'linewidth',LW )
title('Two-sided FFT')
xlbl = xlabel('Frequency $f = \frac{\omega}{2 \pi}$ [Hz]', 'Interpreter','latex');
ylabel('Amplitude ')
xlbl.FontSize= 17;
grid on

% Paper Position
set(gcf, 'PaperType', 'a4letter');
set(gcf, 'PaperUnits', 'centimeters');
set(gcf, 'PaperPosition', [0.0 0.0 25.0 25.0])
wysiwyg


fnPDF3plts = 'FFTsimPlt.pdf';
set(gcf, 'PaperSize', [25.0 25.0])
print(gcf, '-dpdf', ['./figures/', fnPDF3plts]);



% hold on 
% plot(f_vec,matFFT1(:,4)/1,'linewidth',LW )
% hold off


