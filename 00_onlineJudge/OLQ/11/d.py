T = int(input())
# 1
# 5 7 6 7 10 8 2 3 4 11 11 3 4 5 6 8 9 7 8 9 4 6 7 8 12

for t in range(T):
    arr = list(map(int, input().split()))
    arr.sort()
    # mergeSort(arr)
    MIN = int(arr[0]/2)
    MAX = int(arr[24]/2)
    arr.pop(0)
    arr.pop(-1)
    result = []
    for i in range(MIN, MAX+1):
        result.append(i)
    print(result)
    
    hasils = []
    for i in arr:
        for j in result:
            if i - j < MAX:
                hasils.append(i-j)
    print(hasils)


        