for i in range(2):
    data = list(map(str, input().split()))

    for j in range(len(data)):
        data[j] += "szs"
        if j == len(data) - 1 :
            print(data[j])
        else :
            print(data[j], end=" ")
        

        
        