import json
import os
import random

students = {}

with open('names.json', 'r') as f:
    students = json.load(f)

selected = [i for i in range(1, 36)]

cp = []
ct = 1
counter = 1
result = {}
rp = {}
while (len(selected) > 0):
    if counter > 5 :
        counter = 1
        result[str(ct)] = cp
        cp = []
        ct += 1
    else:
        random.shuffle(selected)
        x = random.choice(selected)
        cp.append(students[str(x)])
        selected.remove(x)
        counter += 1

result[str(ct)] = cp
print(result)

with open('result.json', 'w') as f:
    json.dump(result , f, indent=4)
# for i in result:
#     for j in range(5):
#         print(result[i][str(j)])
