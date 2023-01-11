

n = int(input("Masukkan panjang sisi persegi : "))
b = int(input("Masukkan nilai B: "))

for i in range(n):
    for j in range(n):
        if i > j:
            print(1 + i*b - j*b, end=" ")
        elif i < j:
            print(1 + j*b - i*b, end=" ")
        else:
            print(1, end=" ")
    print()



