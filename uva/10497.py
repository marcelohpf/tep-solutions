# Permutação caótica
# (N n) binômio = N! - (N 1) (N-1)! + (N 2) (N-2)! - (N 3) (N-3)!... (-1)^n (N N)
# N!( 1 - 1/1! + 1/2! - 1/3! + ... + (-1)^N/N!
# DP D0 =1 D1=0 D2 = 1; (n-1)*Dn-2 + (n-1)*Dn-1 -> (N-1)(Dn-2 + Dn-1)

dpp = [0] * 1000

def dp(N):
    if N == 0 or N == 2:
        return 1
    if N == 1:
        return 0

    if dpp[N]!=0:
        return dpp[N]

    dpp[N] = (N-1)*(dp(N-2) + dp(N-1))

    return dpp[N]

import fileinput

for line in fileinput.input():
    n = int(line)
    if n == -1:
        break
    print(dp(n))
