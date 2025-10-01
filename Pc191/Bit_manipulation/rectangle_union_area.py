# def rectangle_union_area(rectangles):
#     # Step 1: create events
#     events = []  # (x, y1, y2, type)
#     for (x1, y1, x2, y2) in rectangles:
#         events.append((x1, y1, y2, 1))   # rectangle starts
#         events.append((x2, y1, y2, -1))  # rectangle ends

#     # Step 2: sort by x
#     events.sort(key=lambda e: e[0])

#     def merge_intervals(intervals):
#         """Return total length of union of intervals"""
#         if not intervals:
#             return 0
#         intervals.sort()
#         total = 0
#         cur_start, cur_end = intervals[0]
#         for start, end in intervals[1:]:
#             if start > cur_end:
#                 total += cur_end - cur_start
#                 cur_start, cur_end = start, end
#             else:
#                 cur_end = max(cur_end, end)
#         total += cur_end - cur_start
#         return total

#     # Step 3: sweep line
#     active = []
#     prev_x = events[0][0]
#     area = 0

#     for x, y1, y2, typ in events:
#         # compute covered y-length
#         covered_y = merge_intervals(active)
#         area += covered_y * (x - prev_x)

#         # update active intervals
#         if typ == 1:   # add
#             active.append((y1, y2))
#         else:          # remove
#             active.remove((y1, y2))

#         prev_x = x

#     return area


# # Example from our discussion
# rects = [
#     (1, 1, 3, 3),
#     (2, 2, 4, 4),
#     (3, 1, 4, 2),
#     (5, 1, 6, 3)
# ]

# print("Union Area =", rectangle_union_area(rects))
 

# def union_area(rectangles):
#     events=[]
    
#     for (x1,y1,x2,y2) in rectangles:
#         events.append((x1,y1,y2,'s'))
#         events.append((x2,y1,y2,'e'))
    
#     events.sort(key=lambda e:e[0]) 
    
#     def merged_y(active):
        
#         if not active:
#             return 0
        
#         active.sort()
        
#         cur_start,cur_end=active[0]
#         total=0
#         for start,end in active[1:]:
            
#             if start > cur_end:
#                 total+=cur_end-cur_start
#                 cur_start,cur_end=start,end
#             else:
#                 cur_end=max(cur_end,end)
            
#         total+=cur_end-cur_start
        
#         return total
    
#     active=[]
#     area=0
    
#     prev_x=events[0][0]
    
#     for x,y1,y2,typ in events:
#         del_y=merged_y(active)
#         area+=del_y*(x-prev_x)
        
#         if typ=='s':
#             active.append((y1,y2))
#         else:
#             active.remove((y1,y2))
        
#         prev_x=x
            
#     return area
                
    
# if __name__=='__main__':
#     rects=[
#         #(x1,y1,x2,y2)
#         (1,2,4,5),(2,1,5,3),(3,6,6,8),(5,4,7,7)
#     ]
    
    
#     print(union_area(rects))
    
def union_area(rects:list[tuple])->int:
    events=[] #(x1,y1,y2,start),(x2,y1,y2,end)
    
    for (x1,y1,x2,y2) in rects:
        events.append((x1,y1,y2,'s'))
        events.append((x2,y1,y2,'e'))
    
    events.sort(key=lambda e:e[0])
    
    def merged_y(active):
        
        if not active:
            return 0
        
        active.sort()
        
        cur_start,cur_end=active[0]
        
        total=0
        
        for start,end in active[1:]:
            #disjoint
            if start > cur_end:
                total+=cur_end-cur_start
                cur_start,cur_end=start,end
            else:
                cur_end=max(cur_end,end)
        total+=cur_end-cur_start
        
        return total
    
            
    
    active=[]
    area=0
    prev_x=events[0][0]
    
    for (x,y1,y2,typ) in events:
        del_y=merged_y(active)
        area+=del_y*(x-prev_x)
        
        if typ=='s':
            active.append((y1,y2))
        else:
            active.remove((y1,y2))

        prev_x=x
        
    return area  
    
    


if __name__=='__main__':
    rects=[
        #(x1,y1,x2,y2)
          (1,2,4,5),(2,1,5,3),(3,6,6,8),(5,4,7,7)
        
    ]
    
    print(union_area(rects))
    
    