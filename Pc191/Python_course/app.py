t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))

    A=1
    B=n
    C=2
    D=n-1
    det=A*D - B*C

    if det == 0:
        print('NO')
        continue

    delta_x= D * a[0]-B * a[1]
    delta_y=A * a[1]-C * a[0]

    if delta_x % det != 0 or delta_y % det != 0:
        print('NO')
        continue

    x=delta_x//det
    y=delta_y//det

    if x < 0 or y < 0:
        print("NO")
        continue

    logic=True

    for i in range(n):
       expected=x*(i+1) + y*(n-i)
       if expected != a[i]:
            logic=False
            break
    print('YES' if logic else 'NO')








