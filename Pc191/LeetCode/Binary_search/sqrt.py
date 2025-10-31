def srt(a:int)->int:
    left=0
    right=a

    while left<right:
        mid=left+(right-left)//2
        
        if mid*mid==a:
            return mid
        
        elif mid*mid>a:
            right=mid-1
        else:
            left=mid+1
    
    return left if left*left<=a else left-1



print(srt(0))
        
    
    
    
    
            
            
        
        