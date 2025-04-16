s=input()
result=[]
count=0
balance=0
current_subst=''

for c in s:
    current_subst+=c

    if c=='L':
        balance+=1
    else:
        balance-=1
    
    if balance==0:
        count+=1
        result.append(current_subst)
        current_subst=''

print(count)

for substr in result:
    print(substr)