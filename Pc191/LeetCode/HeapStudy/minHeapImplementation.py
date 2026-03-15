class MinHeap:
    def __init__(self):
        self.heap=[]

    def up_heapify(self,i):
        p=(i-1)//2

        while i>0 and self.heap[p]> self.heap[i]:
            self.heap[i],self.heap[p]=self.heap[p],self.heap[i]
            i = p
            p=(i-1)//2

    def insert(self,val):
        self.heap.append(val)
        i=len(self.heap)-1

        self.up_heapify(i)


    def down_heapify(self,i):
        left=2*i+1
        right=2*i+2

        smallest=i

        if left<len(self.heap) and self.heap[left]<self.heap[smallest]:
            smallest=left

        if right<len(self.heap) and self.heap[right]<self.heap[smallest]:
            smallest=right

        if smallest!=i:
            self.heap[i],self.heap[smallest]=self.heap[smallest],self.heap[i]
            self.down_heapify(smallest)


    def peek(self):
        if not self.heap:
            return None

        return self.heap[0]

    def extract_min(self):
        if not self.heap:
            return None

        if len(self.heap)==1:
            return self.heap.pop()

        mini=self.heap[0]
        last=len(self.heap)-1
        last_val=self.heap.pop()
        self.heap[0]=last_val
        self.down_heapify(0)
        return mini

    def delete(self,i):
        if i>=len(self.heap):
            return

        self.heap[i]=float('-inf')
        self.up_heapify(i)
        self.extract_min()

    def build_heap(self,arr):
        self.heap=arr[:]
        start=len(self.heap)//2-1

        for i in range(start,-1,-1):
            self.down_heapify(i)

    def sort(self):
        arr=[]

        for i in range(len(self.heap)):
            arr.append(self.heap[0])
            self.delete(0)
            self.down_heapify(0)
        return arr







h=MinHeap()

h.insert(10)
h.insert(4)
h.insert(15)
h.insert(2)
h.insert(7)

print(h.heap)
print(h.sort())
print(h.peek())
print(h.extract_min())
print(h.heap)
h.delete(2)

print(h.heap)





        







