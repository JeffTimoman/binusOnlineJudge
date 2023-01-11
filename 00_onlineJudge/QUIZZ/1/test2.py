

a1 = int(input())
b1 = int(input())
c1 = int(input())

a2 = int(input())
b2 = int(input())
c2 = int(input())

a3 = a2 - a1
b3 = b2 - b1

if b3 < 0:
    a3 -= 1
    b3 += 60

c3 = c2 - c1

if c3 < 0:
    b3 -= 1
    c3 += 60

print("Tuan Riz Berlari selama", end="")

if a3 > 0 :
    print(f" {a3} jam", end="")
    #print(a3, end="")
if b3 > 0 :
    print(f" {b3} menit", end="")
if c3 > 0 :
    print(f" {c3} detik", end="")
print(" .", end="")
print()

# # p, q, r = 5.5555, 10.579, 12.356

# # print(p, 'pertama',q, 'kedua', r, 'ketiga')
# # print(f'{p:.2f} pertama {q} kedua {r} ketiga')

# #coba ini
# print("nama")
# print("saya")
# print("matthew")

# #coba ini
# print("nama", end="-")
# print("saya", end="-")
# print("matthew", end="-")


