clc;
clear all;

raw_data = LTspice2Matlab('LMV385.raw', [5 10 11]);

freq_array = [10,30,50,80,100,125,150,200,350,500,625];

first_stage_amplify = [ 34.6, 38.68, 39.19, 39.32, 39.3, 39.23, 39.11,...
                        38.8,37.55, 36.2, 35.08];
full_amplify = [39.11,47.37,48.56,48.93,48.97,48.92, 48.83, 48.57,...
                47.35, 45.97, 44.82];
second_stage_amplify = [ 4.401,8.513,9.049,9.247,9.296,9.331,9.349,...
                        9.367,9.376,9.371,9.36];

for i = 1:length(freq_array)  
    
   freq_marker = freq_array(i);
   Amplifier_1Stage_marker = first_stage_amplify(i);
   Amplifier_FullMarker = full_amplify(i);
   Amplifier_2Stagemarker = second_stage_amplify(i);
   
   semilogx(raw_data.freq_vect,20*log10(abs(raw_data.variable_mat(1,:)))...
             ,freq_marker,Amplifier_1Stage_marker,'O'); 
   hold on    
   semilogx(raw_data.freq_vect,20*log10(abs(raw_data.variable_mat(2,:)))...
            ,freq_marker,Amplifier_FullMarker,'O');
   hold on
   semilogx(raw_data.freq_vect,20*log10(abs(raw_data.variable_mat(3,:)))...
            ,freq_marker,Amplifier_2Stagemarker,'O');
   hold on
   
end

hold off
title('Simulation result of LTSpice');
%legend(raw_data.variable_name_list);
xlabel('Frequency in Hz');
ylabel('Magnitude in Db');