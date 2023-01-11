import numpy as np 

ass = np.array(
    [[1,0,3],
    [0,1,-2],
    [3,-2,1]])

a = np.matmul(ass, ass, ass)
print(a)
a = np.matmul(ass, ass)
print(a)