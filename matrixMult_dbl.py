import numpy
import time

n = 256
a = numpy.random.rand(n,n)
b = numpy.random.rand(n,n)
M = a*0
t = time.time()
for i in range (n) :
    for j in range(n):
        for k in range (n):
            M[i][j] +=(a[i][k] * b[k][j])
# print (M)
print (n,"n : time taken to run loop in seconds : ",time.time() - t)