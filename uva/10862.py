fib = [0, 1]
for i in range(2001*2):
    fib.append(fib[-1]+fib[-2])

import fileinput

for line in fileinput.input():
    if int(line) != 0:
        print(fib[2*int(line)])

