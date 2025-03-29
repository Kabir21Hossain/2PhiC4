#include<bits/stdc++.h>
using namespace std;
class Max_heap{
private:
    vector<int>nodes;

public:
    Max_heap()=default;

    void up_heapify(int index)
    {
        while(index>0 && nodes[index]>nodes[(index-1)/2])
        {
            swap(nodes[index],nodes[(index-1)/2]);
            index=(index-1)/2;

        }

    }
    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);


    }

    void down_heapify(int index){

        while(1)
        {
            int l=2*index+1;
            int r=2*index+2;

            if(l<nodes.size() && nodes[index]<nodes[l])
            {
                swap(nodes[index],nodes[l]);
                index=l;

            }

            if(r<nodes.size() && nodes[index]<nodes[r])
            {
                swap(nodes[index],nodes[r]);
                index=r;

            }

            if(nodes[r]<nodes[index] && nodes[l]<nodes[index])
            {
                break;
            }
        }
    }

    void Delete(int index)
    {
        swap(nodes[index],nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(index);

    }

    void print()
    {
        for(int i=0;i<nodes.size();i++)
        {
            cout<<nodes[i]<<" ";

        }
        cout<<endl;

    }


};
int main()
{
    Max_heap h;
    h.insert(34);
    h.insert(2);
    h.insert(200);
    h.insert(124);
    h.insert(56);
    h.insert(1);
    h.insert(20);
    // h.insert(18);
    // h.insert(1000);
    h.print();
    h.Delete(3);
    h.print();


   return 0;
}