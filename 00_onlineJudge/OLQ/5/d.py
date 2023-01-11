for i in range(int(input())):
    input()
    arr = list(map(int, input().split()))
    sums = 0
    cp = 0
    for j in arr:
        sums += j
    for j in arr:
        if j > sums:
            cp += 1
    
    print("Case #%d: %d\n%d" %(i+1, sums, cp))

