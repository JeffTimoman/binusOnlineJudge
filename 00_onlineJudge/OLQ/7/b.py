data = list(input())

vocals = "aeiou"
v_set = set({})
c_set = set({})
for i in data:
    if i == ' ':
        pass
    else :
        if i in vocals:
            v_set.add(i)
        else :
            c_set.add(i)

print("Vocal: %d" %len(v_set))
print("Consonant: %d" %len(c_set))