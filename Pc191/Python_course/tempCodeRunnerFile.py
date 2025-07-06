t=int(input())
for _ in range(t):
    x=int(input())
    logic=False
    for a in range(int(int(math.cbrt(x)))):
        for b in range(int(math.cbrt(x))):
            if a**3+b**3 == x:
                logic=True
                break




    if logic:
        print('YES')
    else:
        print('NO')
    