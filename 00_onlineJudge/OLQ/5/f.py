for i in range(int(input())):
    # arr = [int(x) for x in input().split()]
    input()
    arr = map(int, input().split())
    arr = list(arr)
    
    arr.sort(reverse=True)
    print("Case #%d: %d" %(i+1, arr[0]+arr[1]))
        
