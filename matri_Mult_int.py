import numpy
import time

n= 512
a = numpy.random.randint(50, size=(n,n))
b = numpy.random.randint(50, size=(n,n))
# print(a)
# print(b)
M = a*0
t = time.time()
for i in range (n) :
    for j in range(n):
        for k in range (n):
            M[i][j] +=(a[i][k] * b[k][j])
            
#M = a.dot(b)
# print (M)
print (n,"n : time taken to run loop in seconds : ",time.time() - t)
