class Solution:
    
    def areaOfMaxDiagonal(self,dimensions:list[list[int]])->int:
        row=len(dimensions)
        area=0
        maxiDiag=0
        
        for x in dimensions:
            a,b=x
            
            if a*a+b*b > maxiDiag:
                maxiDiag=a*a+b*b
                area=a*b
            elif a*a+b*b == maxiDiag:
                if(area<a*b):
                    area=a*b
        
        return area
    
if __name__=='__main__':
    s=Solution()
    
    v=[[10,3],[5,9],[8,3]]
    a=s.areaOfMaxDiagonal(v)
    print(a)