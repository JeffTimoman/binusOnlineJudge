from random import randint

n = 5000

f = open('testdata.in', 'w')
names = ['Olivia Watson', "Albert Einstein", "Anilav Otonarp", "Budi Budi"]
major = ["CS", "EE", "ME", "CE", "IE", "CH", "BT", "MA", "PH", "AR", "EN", "EC", "AG", "AE", "AU", "AT", "AS", "AP", "AM", "AH", "AF", "AD", "AC", "AB", "AA"]
position = ["Lecturer", "AssistantProfessor", "AssociateProfessor", "Professor", "Dean", "Chairman", "VicePresident", "President", "Developer", "Shinzouu"]
f.write(str(n) + '\n')
for i in range(n):
    f.write("B10000" + str(randint(0, 9)) + '\n')
    f.write(names[randint(0, 2)] + '\n')
    f.write(major[randint(0, 23)] + '\n')
    f.write(str(randint(0, 40) / 10) + '\n')
    f.write(position[randint(0, 7)] + '\n')
major.append("CS")
position.append("Teacher")
t = 100
f.write(str(t) + '\n')
for i in range(t):
    f.write(position[randint(0, 8)] + ' ')
    f.write(major[randint(0, 24)] + ' ')
    f.write(str(randint(0, 40) / 10) + '\n')
    

f.close()