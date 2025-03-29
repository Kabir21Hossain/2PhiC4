#include<bits/stdc++.h>
using namespace std;
class max_heap{
    public:
        vector<int>nodes;

    max_heap()=default;
    void up_heapify(int index){
        while(index>0 && nodes[index]>nodes[(index-1)/2])
        {
            int p_idx=(index-1)/2;
            
                swap(nodes[p_idx],nodes[index]);
                index=p_idx;
        
        }

    }
    void down_heapify(int idx)
    {
        while(1)
        {
            int l=2*idx+1;
            int r=2*idx+2;
            if( l<nodes.size() && nodes[idx]<nodes[l])
            {
                swap(nodes[idx],nodes[l]);
               idx=l;
                

            }
            if(r<nodes.size() && nodes[idx]<nodes[r])
            {
                swap(nodes[idx],nodes[2*idx+2]);
                idx=2*idx+2;
                
            }

            if(nodes[idx]>= nodes[r] && nodes[idx]>=nodes[l])
            break;

            
        }
    }
    void Delete(int idx)
    {
        swap(nodes[idx],nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    void print()
    {
        for(int i=0;i<nodes.size();i++)
        {
            cout<<nodes[i]<<" ";

        }
        cout<<endl;
    }
    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
        
    }


};
int main()
{
    max_heap h;
    h.insert(89);
    h.insert(23);
    h.insert(2556);
    h.insert(12);
    h.insert(43);
    h.insert(67);
    h.insert(100);
    h.print();
    h.Delete(3);
    h.print();

    
   return 0;
}