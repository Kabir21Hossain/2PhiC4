# from itertools import combinations
# from math import sqrt,inf,isclose
# from typing import List

# class Solution:
#     def minAreaFreeRect(self, points: List[List[int]]) -> float:
#         def dist(p1,p2):
#             return  (p1[0]-p2[0])**2 + (p1[1]-p2[1])**2
        
#         def dot(p1, p2, p3):
#             """Dot product of vectors p1->p2 and p1->p3"""
#             return (p2[0]-p1[0])*(p3[0]-p1[0]) + (p2[1]-p1[1])*(p3[1]-p1[1])

#         def check(quad)->float:
#             p1,p2,p3,p4=quad
#             pts=[p1,p2,p3,p4]
            
#             for a,b,c in combinations(pts,3):
#                 if isclose(dot(a,b,c),0.0,abs_tol=1e-6):
#                     side1=sqrt(dist(a,b))
#                     side2=sqrt(dist(a,c))
                    
#                     vx=b[0]+c[0]-a[0]
#                     vy=b[1]+c[1]-a[1]
                    
#                     if [vx,vy] in pts:
#                         return side1*side2
#             return inf
        
#         for quad in combinations(points,4):
#             area=check(quad)
#             if area<mini_area:
#                 mini_area=area
        
#         return 0 if mini_area==inf else mini_area
    
    

                
                
# idea 2

from collections import defaultdict
from math import hypot,inf
from itertools import combinations

class Solution:
    def minAreaFreeReact(self,points):
        points=[tuple(p) for p in points]
        n=len(points)
        mid=defaultdict(list)
        ans=inf
        
        for (x1,y1),(x2,y2) in combinations(points,2):
            mx=(x1+x2)/2
            my=(y1+y2)/2
            
            d2=(x1-x2)**2+(y1-y2)**2
            
            mid[(mx,my)].append(((x1,y1),(x2,y2),d2))
        
        for pairs in mid.values():
            for (p1,p2,d1),(p3,p4,d2) in combinations(pairs,2):
                
            
            
            
            