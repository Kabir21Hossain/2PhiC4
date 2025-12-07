def shipWithinDays(weights:list[int],days:int)->int:
    left,right=max(weights),sum(weights)
    
    while left<right:
        mid=left+(right-left)//2
        current=0
        day_count=1
        
        for w in weights:
            if current+w>mid:
                day_count+=1
                current=0
            
            current+w
        
        if day_count <=days:
            right=mid
        else:
            left=mid+1
            
    
    return left
    