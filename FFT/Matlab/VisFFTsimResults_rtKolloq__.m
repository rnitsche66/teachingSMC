% Nach dem Simulieren des Models FFT4dSpace.slx koennen mit diesemm Script
% das FFT Datenspektrum geplottet werden.

% nitr; 02.02.2024


matFFT = out.Ampli;
matFFT1 = out.Ampli1;
clear t

% *******************************************
% Umsortieren fuer einen 3 D Plot
% *******************************************
% Anzahl der Zeitfenster kann man ausrechnen:
% 1sec / (1024*Ts) ; simTime = 1 sec; Ts = 6.25e-5;
%  => 16 Pakete bei 1 Sekunde...
for i = 1:length(matFFT(1,1,:))
    % t(i) = i;
    t(i,:) = matFFT(:,i);
end

figure(10); mesh(t)

f_vec = [0:1:length(matFFT(:,1))-1]*1/Ts/length(matFFT);

LW=1.5;

figure(100);
plot(f_vec,matFFT(:,16),'linewidth',LW )

hold on 
plot(f_vec,matFFT1(:,16)/1,'linewidth',LW )
hold off
