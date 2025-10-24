t=int(input())
for _ in range(t):
    n=int(input())
    even=True if n%2==0 else False
    
    if even:
        for i in range(2,n+1,2):
            print(i,i-1,end=" ")
    else:
        for i in range(2,n-2,2):
            print(i,i-1,end=' ')
            
        print(n-1,n,n-2)
            
    print()
    