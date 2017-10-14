# Catalan numbers
import math

cat = [0]*1002
cat[0]=1

for n in range(1, 1002):
    for i in range(n):
        cat[n] += (cat[i]*cat[n-1-i])

import fileinput
for line in fileinput.input():
    print(cat[int(line)])
