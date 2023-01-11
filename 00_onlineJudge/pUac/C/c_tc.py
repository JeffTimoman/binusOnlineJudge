from random import randint

f = open("testdata.in", "w")

n = 100
f.write(str(n) + "\n")
r = 0
for i in range(n):
    x = randint(1, 10000)
    f.write(str(x) + "\n")
    for i in range(x):
        f.write(str(randint(1, 10000)) + " ")
    f.write("\n")

f.close()

