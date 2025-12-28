# def max_rectangular_area(heights):
#     n=len(heights)
    
#     if n==0:
#         return 0
    
#     max_area=0
    
#     for i in range(n):
#         min_h=heights[i]
#         for j in range(i,n):
#             # min_height=heights[i]
            
#             # for k in range(i,j+1):
                
#             #     if heights[k]<min_height:
#             #         min_height=heights[k]
#             min_h=min(min_h,heights[j])
            
#             width=j-i+1
#             area=width*min_h
#             max_area=max(area,max_area)
#     return max_area

                
def max_rectangular_area(heights):
    n=len(heights)
    if n==0:
        return 0
    
    max_area=0
    
    stack=[]
    
    for i in range(n+1):
        current_height=0 if i==n else heights[i]
        while  stack and current_height<heights[stack[-1]]:
            height=heights[stack.pop()]
            left=stack[-1] if stack else -1
            width=i-left-1
            max_area=max(max_area,height*width)

        stack.append(i)
    return max_area
            


heights=[2,1,5,6,1,3]
print(max_rectangular_area(heights))
