# class Solution:
#     def slope(self,p1,p2):
#         x1,y1=p1
#         x2,y2=p2
#         dx=x2-x1
#         dy=y2-y1
        
#         if dx==0:
#             return 'inf'
#         return dy/dx
    


def slope(p1,p2):
    x1,y1=p1
    x2,y2=p2
    dx=x2-x1
    dy=y2-y1
    
    if dx==0:
        return 'inf'
    return dy/dx


points=[[1,1],[2,2]]

prev_max=0

for i in range(len(points)):
    slopes={}
    for j in range(i+1,len(points)):
        m=slope(points[i],points[j])
        slopes[m]=slopes.get(m,0)+1
        
    if slopes:
        local_max=max(slopes.values())
    else:
        local_max=0
    
    prev_max=max(prev_max,local_max)

print(prev_max+1)
