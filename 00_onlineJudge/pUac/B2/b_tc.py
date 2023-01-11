from random import randint

t = 200

f = open('testdata.in', 'w')

f.write(str(t) + '\n')
for i in range(t):
    n = randint(1, 500)
    k = randint(1, n)
    arr = []
    f.write(str(n) + ' ' + str(k) + '\n')

    for j in range(n):
        arr.append(randint(1, 10000000))
    arr.sort()
    for j in range(n):
        if (j == n - 1):
            f.write(str(arr[j]))
        else:
            f.write(str(arr[j]) + ' ')
    f.write('\n')

f.close()
