import math

N = int(input())

for a in range(N):
    M = [int(x) for x in input().split()]
    n = len(M)
    j=list()
    for a in range(0,n):
        for b in range(a+1,n):
            j.append(math.gcd(M[a],M[b]))
    print(max(j))
