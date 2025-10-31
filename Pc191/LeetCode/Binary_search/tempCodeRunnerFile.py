def srt(a:int)->int:
    left=0
    right=a

    while left<right:
        mid=left+(right-left)//2
        
        if mid*mid>10:
            right=mid-1
        else:
            left=mid+1
    
    return left-1


print(srt(100))
        
    
    
    
    
            
            
        
        