from typing import List
class Solution:
    def largestTriangleArea(self,points:list[list[int]])-> float:
        class Solution:
    def largestTriangleArea(self, points: List[List[int]]) -> float:
        n=len(points)
        points.sort(key=lambda p: (p[0],p[1]))
        
        max_area=0.0
        
        for i in range(n-2):
            for j in range(i+1,n-1):
                for k in range(j+1,n):
                    max_area=max(max_area,self.area(points[i],points[j],points[k]))
        
        return max_area
                

    
    def area(self,p1,p2,p3):
        x1,y1=p1
        x2,y2=p2
        x3,y3=p3
        
        return abs((x1*y2-x2*y1)+(x2*y3-x3*y2)+(x3*y1-x1*y3))/2 
    
        
        