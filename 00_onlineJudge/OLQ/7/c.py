data = input().lower()
data = list(data)
a = "1234567890"
a = list(a)
b = "ireasgtbpo"
b = list(b)
for i in range(len(data)):

    if data[i] in a:
        data[i] = b[a.index(data[i])]
    print(data[i], end="")