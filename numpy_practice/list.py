import numpy as np
'''a = np.array([1,4,6,7])
b = np.array([1,4,7,4])
print(a*b)
c = np.array([[1,3,5,2],[3,5,8,2]])
print(c.ndim)
print(c.dtype)

a = np.array([[[1,5,6,7],[3,7,2,7]],[[8,3,97,2],[4,8,5,9]]])
print(a.ndim)
#specific element of 3d arrray
print(a[0,1,3])

a = np.ones((2,3), dtype = 'int32')
print(a)
b = np.full ((4,5), 101)
print(b)
c = np.full_like(a,7)
print(c)
arr = np.array([[1,2,3]])
r1 = np.repeat(arr, 5, axis = 0)
print(r1))
a = np.ones((5,5))
print(a)
z = np.zeros((3,3))
z[1,1] = 9
print(z)

a[1:4,1:4] = z
print(a)

a = np.ones((2,5))
print(a)
b= np.full((5,3),7)
print(b)
c = np.matmul(a,b)
print(c)

a = np.ones((5,3))
print(a)
b= np.full((5,3),7)
print(b)
c = a + b
print(c)'''

a = np.ones((5,5))
det_a = np.linalg.det(a)
print(det_a)