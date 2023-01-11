

n = int(input("Masukkan panjang sisi persegi : "))
s = int(input("Masukkan nilai B: "))

arr = []
for i in range(n):
    arr.append([])

for i in range(n):
    for j in range(n):
        if i > j:
            arr[i].append(1 + i*s - j*s)
        elif i < j:
            arr[i].append(1 + j*s - i*s)
        else:
            arr[i].append(1)

for nana in arr:
    for i in nana:
        print(i, end=" ")
    print()


