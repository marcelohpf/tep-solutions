def mss(numbers):
    maxi=-999999
    size=len(numbers)
    for i in range(size):
        cur_max=1
        for j in range(i,size):
            cur_max=cur_max*numbers[j]
            if cur_max > maxi:
                maxi=cur_max
    return maxi

while True:
    try:
        a = input()
        numbers = [ int(x) for x in a.split(' ')]
        numbers.pop()
        maxi=numbers[-1]
        print(mss(numbers))
        numbers=[]
    except:
        break
