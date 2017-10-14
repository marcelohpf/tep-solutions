pasc = [[1,1], [0]]
i = 0
mid = 10
a = 10**60
while a > mid :
    pasc[1][0]=1
    pasc[1].append(0)
    pasc[1].append(0)
    for j in range(1, i+1):
        pasc[1][j] = pasc[0][j] + pasc[0][j-1]
    print(str(pasc[1][:-2])[1:-1].replace(',',''))
    pasc[0], pasc[1] = pasc[1], pasc[0]
    mid = pasc[0][int((len(pasc[1])-2)/2)]
    i+=1
