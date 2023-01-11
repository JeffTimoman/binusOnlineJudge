import numpy
import math
import os
os.system('cls')


# data = numpy.matrix([
# 		[0, 0, 4, 9, 7],
# 		[0, 4, 5, 7, 1],
# 		[2, 6, 1, 8, 0],
# 		[0, 0, 0, 0, 1],
# 		[0, 0, 0, 1, 0]
# 	])	
a, b, c, d, e, f, g, h, i = 1, 2, 6, 4, 5, 9, 7, 8, 7
data = numpy.matrix([
	[a, b, c],
	[d, e, f],
	[g, h, i]
	])

data2 = numpy.matrix([
	[2*d, a, g+5*a],
	[2*e, b, h+5*b],
	[2*f, c, i+5*c]
	])

print(numpy.linalg.det(data))
print(numpy.linalg.det(data2))
# print(numpy.conj(data))

# print(f"Before Transpose Det : {numpy.linalg.det(data):.2f}")
# data = numpy.transpose(data)
# print(f"After Transpose Det : {numpy.linalg.det(data):.2f}")
# for t in range(0, 1):
	# data = numpy.matrix([
	# 		[1, 1, 1],
	# 		[3, 0, -1],
	# 		[1, 2, -1]
	# 	])
	# print(f"{numpy.linalg.det(data):.2f}")
	# ms = numpy.linalg.det(data)
	# print(numpy.linalg.det(data))
	# print("[A, B]\n[O, C]")
	# print(f"Before Invers :\n{data}")
	# data = numpy.linalg.inv(data)
	# print(f"After Invers :\n{data}")
	# print(f"The Determinant = {numpy.linalg.det(data)}")
	# print(f"Det Invers * Det Matrix : {numpy.linalg.det(data)*ms}")
	# dataA = numpy.matrix([
	# 	[1, 3],
	# 	[1, 1]
	# 	])
	# dataB = numpy.matrix([
	# 	[3, 5],
	# 	[2, 4]
	# 	])
	# dataC = numpy.matrix([
	# 	[1, 2],
	# 	[2, 1]
	# 	])
	# dataO = numpy.matrix([
	# 	[0, 0],
	# 	[0, 0]
	# 	])
	# print(f"Before Invers :\n{dataA}")
	# dataA = numpy.linalg.inv(dataA)
	# print(f"After Invers :\n{dataA}")
	# print(f"The Determinant = {numpy.linalg.det(dataA)}")

	# print(f"Before Invers :\n{dataB}")
	# dataB = numpy.linalg.inv(dataB)
	# print(f"After Invers :\n{dataB}")
	# print(f"The Determinant = {numpy.linalg.det(dataB)}")

	# print(f"Before Invers :\n{dataO}")
	# # dataO = numpy.linalg.inv(dataO)
	# print(f"After Invers :\n{dataO}")
	# print(f"The Determinant = {numpy.linalg.det(dataO)}")

	# print(f"Before Invers :\n{dataC}")
	# dataC = numpy.linalg.inv(dataC)
	# print(f"After Invers :\n{dataC}")
	# print(f"The Determinant = {numpy.linalg.det(dataC)}")

	# dataBM = numpy.linalg.inv(dataB) * -1
	# print(dataBM)
	# result = numpy.dot(dataBM, dataA)
	# print(result)
	# result = numpy.dot(result, dataC)
	# print(data, end="\n\n")
	# print(result)






# data2 = numpy.matrix([
# 	[0, 0, 0, 1],
# 	[0, 0, 1, 0],
# 	[0, 1, 0, 0],
# 	[1, 0, 0, 0]
# 	])
# print(data2)
# print(numpy.linalg.inv(data2))
# data2 = numpy.linalg.inv(data2)
# print(numpy.linalg.det(data2))
