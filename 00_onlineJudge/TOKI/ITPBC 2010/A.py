
a, b, c, d = input().split()
a, b, c, d = int(a), int(b), int(c), int(d)

for i in range(c):
    # a = pow(a, b, d)
    a = pow(a, b)
    a %= d
print(a+1)
