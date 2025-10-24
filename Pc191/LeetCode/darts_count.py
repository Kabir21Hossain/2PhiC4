import math 
class Solution:
    def numPoints(self,darts:list[list[int]],r:int)->int:
        n=len(darts)
        
        if n==1:
            return 1
        
        ans=1
        eps=1e-7
        
        for i in range(n):
            for j in range(i+1,n):
                x1,y1=darts[i]
                x2,y2=darts[j]
                dx=x2-x1
                dy=y2-y1
                d=math.hypot(dx,dy)
                
                if d>2*r:
                    continue
                
                h=math.sqrt(r**2-(d/2)**2)
                mx,my=(x1+x2)/2,(y1+y2)/2
                
                ux=-dy/d
                uy=dx/d
                
                centers=[
                    (mx+ux*h,my+h*uy),
                    (mx-ux*h,my-h*ux)
                ]
                
                for xc,yc in centers:
                    cnt=0
                    for x,y in darts:
                        if (x-xc)**2+(y-yc)**2<=r*r+eps:
                            cnt+=1
                    ans=max(ans,cnt)
        
        return ans
    
                
                        
                            
                         
                