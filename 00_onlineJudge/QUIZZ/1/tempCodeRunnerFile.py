print("Masukkan waktu mulai!")

jam1 = int(input("Jam  : "))
menit1 = int(input("Menit  : "))
detik1 = int(input("Detik  : "))

print("Masukkan waktu selesai!")

jam2 = int(input("Jam  : "))
menit2 = int(input("Menit  : "))
detik2 = int(input("Detik  : "))

if detik2>detik1 :
    c = int(detik2 - detik1)
else :
    menit2 = menit2-1
    detik2 = detik2 + 60
    c = int(detik2-detik1)

if menit2>menit1 :
    b = int(menit2-menit1)
else :
    jam2 = jam2-1
    menit2 = menit2 + 60
    b = int(menit2-menit1)

if jam2>jam1 :
    a = int(jam2-jam1)

print("Tuan Riz berlari selama ")

if int(a > 0):
    print(str(a) + "Jam")
if int(b > 0):
    print(str(b) + "Menit")
if int(c > 0 ):
    print(str(c) + "Detik")