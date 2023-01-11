
n = int(input())
for i in range(n):
    nama = list(input())
    data = set([i for i in nama])
    print(f"{data} : {type(data)}")
    if len(data) %2 == 0: 
        print(f"Case #{i+1}: Breakable")
    else : 
        print(f"Case #{i+1}: Unbreakable")
