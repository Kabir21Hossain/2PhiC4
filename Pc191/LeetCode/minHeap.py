# class MinHeap:
#     def __init__(self):
#         self.heap=[]
#
#
#     def insert(self,val):
#         self.heap.append(val)
#
#         i=len(self.heap)-1
#
#         p=(i-1)//2
#
#         while i>0 and self.heap[p]>self.heap[i]:
#             p=(i-1)//2
#             self.heap[p],self.heap[i]=self.heap[i],self.heap[p]
#             i=p
#
#
#
#
#     def show(self):
#         print(self.heap)
#
#
# if __name__=='__main__':
#     heap=MinHeap()
#     heap.show()
#
#     heap.insert(2)
#     heap.show()
#     heap.insert(29)
#     heap.show()
#     heap.insert(1)
#     heap.show()
#     heap.insert(98)
#     heap.show()
#     heap.insert(23)
#     heap.show()
#     heap.insert(100)
#     heap.show()
#     heap.insert(50)
#     heap.show()
#
#     heap.insert(3)
#     heap.show()

import heapq as h

heap=[]

# h.heappush(heap,10)
# print(heap)
# h.heappush(heap,2)
# print(heap)
# h.heappush(heap,34)
# print(heap)
# h.heappush(heap,1)
# print(heap)


arr=[45,23,19,4,50,21,3,65,2,78,97,1]

for x in arr:
    h.heappush(heap,x)
    print(heap)

# print(heap[0])

talk=[]
for x in arr:
    h.heappush(talk,-x)
    print(talk)

print(-talk[0])









