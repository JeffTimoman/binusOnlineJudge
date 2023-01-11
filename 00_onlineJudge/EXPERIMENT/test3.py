import numpy
import math

import os
os.system('cls')

for i in range(30, -30, -1):
	t = i
	data = numpy.matrix([
		[t, 1, 1, 1],
		[1, t, 1, 1],
		[1, 1, t, 1],
		[1, 1, 1, t]
		])

	print(f"t : {t} || Det : {numpy.linalg.det(data)}")

# data2 = numpy.matrix([
# 	[5, 1, 1],
# 	[1, 5, 1],
# 	[1, 1, 5],
# 	])

# print(numpy.linalg.det(data2))

