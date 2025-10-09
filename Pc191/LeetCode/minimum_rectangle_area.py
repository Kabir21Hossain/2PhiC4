class Solution:
    def minAreaRect(self,points:list[list[int]])->int:
        from collections import defaultdict
        
        columns=defaultdict(list)
        
        points.sort(key=lambda p:p[0])
        
        for x,y in points:
            columns[x].append(y)
        
        min_area=float('inf')
        last_x={}
        
        for x in columns:
            ys=sorted(columns[x])
            
            for i in range(len(ys)):
                for j in range(i+1,len(ys)):
                    y1,y2=ys[i],ys[j]
                    
                    if (y1,y2) in last_x:
                        prev_x=last_x[(y1,y2)]
                        area=(x-prev_x)*(y2-y1)
                        min_area=min(area,min_area)
                    
                    last_x[(y1,y2)]=x
        
        return 0 if min_area==float('inf') else min_area
                        
                        
        
        
        