
for i in range(int(input())):
    input()
    arr = list(map(int, input().split()))
    arr.sort(reverse=True)
    max_v = arr[0]
    max_f = 0
    count = []
    for j in range(max_v + 1):
        count.append(0)
    for j in arr:
        count[j] += 1
        if count[j] > max_f:
            max_f = count[j]
    print("Case #%d: %d" %(i+1, max_f))
    result = []
    counter = 0
    for j in range(len(count)): 
        if count[j] == max_f:
            result.append(j)
            counter += 1
    s = 0
    for j in result:
        if s == counter - 1:
            print("%d" %(j))
        else :
            print("%d" %(j), end=" ")
        s += 1

    
            


            
    