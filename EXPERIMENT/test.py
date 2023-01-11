from math import pow

poss = [1, -45, 45, -1, 3, -15, 15, -3, 5]

for x in range(-45, 45):
    
    result = pow(x, 3) - 2 *pow(x, 2) - 4 * x + 8
    if result == 0:
        print(f"{x} -> {result}")


# import numpy as np
# from math import sqrt
# value = 1/sqrt(15)

# print(np.arccos(value) * 180 / np.pi)