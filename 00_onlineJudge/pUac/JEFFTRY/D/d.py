

f = open('testcase.in', 'r')

# Read line
line = f.readline()
line = f.readline()
line = f.readline()

arr = list(map(int, line.split()))
print(len(arr))
