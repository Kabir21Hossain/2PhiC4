from itertools import combinations
class Solution:
    def numberOfPairs(self,points:list[list[int]])->int:
        count=1
        for p1,p2 in combinations(points,2):
            x1,y1=p1
            x2,y2=p2
            
            if x1<x2 and y1>y2:
                count+=1
        
        return count
    
            
        