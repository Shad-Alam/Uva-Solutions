import math
while True:
    try:
        n = int(input())
    except EOFError:
        break
    print(f'{n}!')
    print(math.factorial(n))
