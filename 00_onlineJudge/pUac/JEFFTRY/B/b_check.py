

f = open('books1_48.out', 'r')
f2 = open('testdata.out', 'r')


for i in range(48):
    line = f.readline().rstrip()
    line2 = f2.readline().rstrip()
    if (line == line2):
        print(f"{i+1}: OK")
    else :
        print(f"{i+1}: HMM")

f.close()
f2.close()