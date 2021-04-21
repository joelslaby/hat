g_data = readtable("4_18_009_moving.txt")

g_data_m = table2array(g_data(:,4));

g_data_time = cell (1,174);
g_data_lat = zeros (1,174);
g_data_long = zeros (1,174);

for i = 1:length(g_data_m)/3
    
%g_data_time(1,i) = g_data_m (1+3*(i-1),1);
g_data_lat (1,i) = g_data_m (2+3*(i-1),1);
g_data_long (1,i) = g_data_m (3+3*(i-1),1);

end 

lat = [ 33.8655 33.8657]
long = [ -84.2775 -84.2763]


format long
avg_long = mean2 (g_data_long)
avg_lat = mean2 (g_data_lat)

for i = 1:2:length(g_data_m)/3

geoplot(g_data_lat(1,i), g_data_long(1,i) , '-r*')

geolimits(lat,long)
geobasemap satellite

pause(0.005)
hold on 
end
