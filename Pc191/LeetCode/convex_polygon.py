class Solution:
    def convexPolygon(self,vertices:list[tuple[int]])->bool:
        n=len(vertices)
        
        if n<3:
            return False
        
        symbol=None
        
        for i in range(n):
            cur=i
            prev=(i-1)%n
            nxt=(i+1)%n
            
        
            x0,y0=vertices[cur]
            x1,y1=vertices[nxt]
            x2,y2=vertices[prev]
            
            dx1=x1-x0
            dy1=y1-y0
            dx2=x2-x0
            dy2=y2-y0
            
            D=dx1*dy2-dx2*dy1
            
            if D==0:
                continue
            
            if symbol is None:
                if D>0:
                    symbol=0
                else:
                    symbol=1
            elif (D>0 and symbol==1) or (D<0 and symbol==0):
                return False
                
                
        return True
    
    
            
            
            

vertices = [(0,0), (0,10), (10,10), (10,0), (5,5)]
print(Solution().convexPolygon(vertices))
# ❌ Output: False
