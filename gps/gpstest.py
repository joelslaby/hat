
import gps
import numpy as np

# Listen on port 2947 (gpsd) of localhost
session = gps.gps("localhost", "2947")
session.stream(gps.WATCH_ENABLE | gps.WATCH_NEWSTYLE)

lats = np.array([])
lons = np.array([])

for i in range(20):
    try:
        report = session.next()
        # Wait for a 'TPV' report and display the current time
        # To see all report data, uncomment the line below
        # print(report)
        if report['class'] == 'TPV':
            if hasattr(report, 'time'):
                print("Time: " + str(report.time))
            if hasattr(report, 'lat'):
                #print("Latitude: " + str(report.lat))
                lats = np.append(lats, report.lat)
            if hasattr(report, 'lon'):
                lons = np.append(lons, report.lon)
               #print("Longitude:" +  str(report.lon))
            print()
    except KeyError:
        pass
    except KeyboardInterrupt:
        quit()
    except StopIteration:
        session = None
        print("GPSD has terminated")

print("Average Lattitude: {}" .format(np.mean(lats)))
print("Average Longitude: {}" .format(np.mean(lons)))
