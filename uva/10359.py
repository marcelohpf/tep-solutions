# Pn = P(n-1)+2P(n-2)

dp = [0] * 300

def pn(n):
    if n == 0:
        return 1
    if n == 1:
        return 1
    if n == 2:
        return 3

    if dp[n] != 0:
        return dp[n]

    dp[n] = pn(n-1)+2*pn(n-2)

    return dp[n]
import fileinput

for line in fileinput.input():
    n = int(line)
    print(pn(n))
