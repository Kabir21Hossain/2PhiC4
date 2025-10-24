from typing import List
from collections import defaultdict
class Solution:
    def maxArea(self, coords: List[List[int]]) -> int:
        if len(coords)<3:
            return -1
        
        xs=[x for x,y in coords]
        ys=[y for x,y in coords]
        
        min_x,max_x=min(xs),max(xs)
        min_y,max_y=min(ys),max(ys)
        
        x_to_ys=defaultdict(list)
        y_to_xs=defaultdict(list)
        
        
        
        for x,y in coords:
            x_to_ys[x].append(y)
            y_to_xs[y].append(x)
        
        max_area=0
        
        for x,ys in x_to_ys.items():
            if len(x_to_ys)>=2:
                height=max(ys)-min(ys)
                
                width=max(abs(x-min_x),abs(x-max_x))
                max_area=max(max_area,height*width)
                
        for y, xs in y_to_xs.items():
            if len(xs) >= 2:
                base = max(xs) - min(xs)
                height = max(abs(y - min_y), abs(y - max_y))
                max_area2 = max(max_area2, base * height)

        return max_area2 if max_area2 > 0 else -1         
        
        