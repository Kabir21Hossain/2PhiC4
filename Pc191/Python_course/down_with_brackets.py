t=int(input())
for _ in range(t):
    s=input()
    logic=True
    for i in range(len(s)//2):
        if s[i] =='(' and s[-(i+1)]!=')':
            logic=False
            break

            
    if logic is True:
        print('YES')
    else:
        print('NO')


