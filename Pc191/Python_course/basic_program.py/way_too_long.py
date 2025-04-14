t=int(input())

for _ in range(t):
    s=input()
    if len(s) > 10:
        a=f"{s[0]}{len(s)-2}{s[-1]}"
        print(a)
    else:
        print(s)
