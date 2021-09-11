import math

T = int(input())

for a in range(T):
    G,L=map(int,input().split())
    a,b=int(math.gcd(G,L)),int(G*L/math.gcd(G,L))
    if a<G:
        print('-1')
    else:
        print(f'{a} {b}')
