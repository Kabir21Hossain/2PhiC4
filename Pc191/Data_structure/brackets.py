
t= int(input())

for _ in range(t):
    s=input()
    logic=False
    for i in range(len(s)-1):
        if s[i] ==')' and s[i+1]=='(':
            logic=True
            break
    if logic:
        print("YES")
    else:
        print('NO')
    


