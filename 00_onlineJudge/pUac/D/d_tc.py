from random import randint

f = open('testdata.in', 'w')

t = 10

f.write(str(t) + '\n')

for i in range(t):
    n = randint(1, 100000)
    smp = set()
    target = randint(1, 2000000)
    f.write(str(n) + ' ' + str(target) + '\n')
    while(len(smp) < n):
        x = randint(1, 1000000)
        smp.add(x)
    smp = list(smp)
    print(len(smp))
    for j in range(n):
        if (j == n-1):
            f.write(str(smp[j]))
            break
        f.write(str(smp[j]) + ' ')
    f.write('\n')

f.close()