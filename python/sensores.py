import sys
import numpy as np
import matplotlib.pyplot as plt
import time
#Leo nombre de archivo de muestras
if len(sys.argv) > 1 :
    samples_file = sys.argv[1]
    data = np.loadtxt(samples_file, unpack = True)

    sens = data[1:]
    for i in range(len(sens)) :
        media = np.mean(sens[i])
        sigma = np.std(sens[i])

        icond = np.where(abs(sens[i]-media) >= sigma*3)

        print ' '
        print  'Showing bad values from sensor', i
        #print data[0][icond], data[i][icond]
        for x in icond[0] :
            print  time.strftime("%H:%M:%S", time.gmtime(int(data[0][int(x)]))), '%7.2f' % (sens[i][int(x)])

        plt.figure(i)
        plt.scatter(data[0], sens[i],label='sensor '+str(i))
        plt.ylabel('sensor '+str(i))
        plt.xlabel('time')
        plt.axhline(media+sigma*3, color = 'r', linestyle='--')
        plt.axhline(media-sigma*3, color = 'r', linestyle='--')
        plt.axhline(media, color = 'r')
        #plt.legend(loc='best')

    print ' '
    plt.show()

else : print 'Usage: sensores.py <samples_file>'
