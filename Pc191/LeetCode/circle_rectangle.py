class Solution:
    def checkOverlap(self,r:int,xc:int,yc:int,x1:int,y1:int,x2:int,y2:int)->bool:
        for x in range(x1,x2+1):
            for y in range(y1,y2+1):
                if (x-xc)**2+(y-yc)**2<=r*r:
                    return True
        return False