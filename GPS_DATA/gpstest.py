

import gps
import numpy as np

# Listen on port 2947 (gpsd) of localhost
session = gps.gps("localhost", "2947")
session.stream(gps.WATCH_ENABLE | gps.WATCH_NEWSTYLE)

lats = np.array([])
lons = np.array([])

f = open("data.txt", "w")

for i in range(300):
    try:
        report = session.next()
	# Wait for a 'TPV' report and display the current time
        # To see all report data, uncomment the line below
        # print(report)
        if report['class'] == 'TPV':
            if hasattr(report, 'time'):
                print("Time: " + str(report.time))
                f.write("Nbr: " + str(i) + " Time: " + str(report.time) + "\n")
            if hasattr(report, 'lat'):
                #print("Latitude: " + str(report.lat))
                lats = np.append(lats, report.lat)
                f.write("Nbr: " + str(i) + " Lat: " + str(report.lat) + "\n")
            if hasattr(report, 'lon'):
                lons = np.append(lons, report.lon)
               #print("Longitude:" +  str(report.lon))
                f.write("Nbr: " + str(i) + " Lon: " + str(report.lon) + "\n")
            print()
    except KeyError:
        pass
    except KeyboardInterrupt:
        quit()
    except StopIteration:
        session = None
        print("GPSD has terminated")

print("Average Lattitude: {}" .format(np.mean(lats)))
f.write("Avg Lat: " + str(np.mean(lats)))

print("Average Longitude: {}" .format(np.mean(lons)))
f.write("Avg Long: "+ str(np.mean(lons)))

f.close()
