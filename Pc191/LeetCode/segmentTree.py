class SegmentTree:
    def __init__(self,arr):
        self.n=len(arr)
        self.arr=arr
        self.tree=[0]*(4*self.n)
        self.build(1,0,self.n-1)

    def build(self,node,l,r):
        if l==r:
            self.tree[node]=self.arr[l]
            return

        mid=(l+r)//2

        self.build(2*node,l,mid)
        self.build(2*node+1,mid+1,r)

        self.tree[node]=self.tree[2*node]+self.tree[2*node+1]

    def query(self,node,start,end,L,R):
        if R<start or end<L:
            return 0

        if L<=start and end<=R:
            return self.tree[node]

        mid=(start+end)//2

        left=self.query(2*node,start,mid,L,R)
        right=self.query(2*node+1,mid+1,L,R)

        return left+right

    def update(self,node,start,end,idx,val):
        if start==end:
            self.arr[idx]=val
            self.tree[node]=val
            return

        mid=(start+end)//2

        if idx<=mid:
            self.update(2*node,start,mid,idx,val)
        else:
            self.update(2*node+1,mid+1,end,idx,val)

        self.tree[node]=self.tree[2*node]+self.tree[2*node+1]

