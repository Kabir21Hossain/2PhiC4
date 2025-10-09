class Solution:
    def checkStraightLine(self,coordinates:list[list[int]])->bool:
        x1,y1=coordinates[0]
        x2,y2= coordinates[1]
        
        dy=y2-y1
        dx=x2-x1
        
        for i in range(2,len(coordinates)):
            x,y=coordinates[i]
            if dx*(y-y1)!=dy*(x-x1):
                return False
        
        return True
    
                
            
        