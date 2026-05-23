import numpy as np
'''a = np.array([1,4,6,7])
b = np.array([1,4,7,4])
print(a*b)
c = np.array([[1,3,5,2],[3,5,8,2]])
print(c.ndim)
print(c.dtype)'''

a = np.array([[[1,5,6,7],[3,7,2,7]],[[8,3,97,2],[4,8,5,9]]])
print(a.ndim)
#specific element of 3d arrray
print(a[0,1,3]) 
