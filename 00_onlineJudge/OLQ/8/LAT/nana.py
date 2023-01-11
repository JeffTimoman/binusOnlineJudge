
#Print spinning doughnut shape

import time, sys

try:
    while True:
        for i in ["/","-","|","\\","|"]:
            print("%s\r" % i, end="")
            sys.stdout.flush()
            time.sleep(0.1)
except KeyboardInterrupt:
    print("Done.")
