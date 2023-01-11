import json

files = open('test.json', 'r')
files2 = open('test2.json', 'w')
#2 file buat comparison bae

#Ubah json jadi data di python
data = json.load(files)

#Ini data setelah json jadi data, dictionary.
print(data)
#false --> False, dll.

for i in data:
    print(f"Nama : {data[i]['nama']}, Umur : {data[i]['umur']}, Alamat : {data[i]['alamat']}, Nikah {data[i]['nikah']}")


#ini kalo mau ubah data dalem json
#tinggal ubah dictionary baru inject ke json
data['1']['nama'] = 'Bambang'
data['1']['umur'] = 25
data['1']['alamat'] = 'Jakarta aja'
data['1']['nikah'] = False


#masukin data dalam json bisa pake ini (kalo file udah di open) atau
json.dump(data, files2, indent=4)
files2.close()
files.close()
#ini
# with open("test2.json", "w") as f:
#     json.dump(f, data, indent=4)
#indent biar rapi :v

#dump juga dipake buat ubah python  dict --> json.
