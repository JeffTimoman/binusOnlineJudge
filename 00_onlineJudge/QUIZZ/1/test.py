
A = [
    ['a', 'b', 'c'],
    ['d', 'e', 'f'],
    ['g', 'h', 'i']
]
n = 3
k = 2

for a in range(n-k+1):
    for b in range(n-k+1):
        for i in range(k):
            for j in range(k):
                print(A[i+a][j+b], end=' ')
            print()
