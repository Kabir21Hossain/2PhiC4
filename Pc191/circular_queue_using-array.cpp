#include<bits/stdc++.h>
using namespace std;
#define capacity 7
class Queue
{
    private:
        int arr[capacity];
        int l,r;
        int sz;
    
    public:

        Queue()
        {
            for(int i=0;i<capacity;i++)
            {
                arr[i]=0;
            }

            l=0;
            r=-1;
            sz=0;

        }

        void enqueue(int value)
        {
            if(sz==capacity)
            {
                cout<<"queue is full\n";
                return;

            }
            r++;

            if(r==capacity)
            {
                r=0;
            
            }

            
                arr[r]=value;
                sz++;
        }

        void dequeue()
        {
            if(sz==0)
            {
                cout<<"Queue is empty\n";
                return;

            }

                l++;
              
            if(l==capacity)
            {
                l=0;
            }

           sz--;

        }


        int front()
        {
            if(sz==0)
            {
                cout<<"empty\n";
                return -1;
            }

            return arr[l];

        }

        int len()
        {
            return sz;

        }

        int back()
        {
            if(sz==0)
            {
                
                cout<<"empty\n";
                return -1;
            }

            return arr[r];
        }

        void print()
        {
            int i=l;
            int j=r;
            if(sz==0)
            return;
            if(i<j)
            {
            while(i<=j)
            {
                cout<<arr[i]<<" ";
                i++;
                
            }
            cout<<endl;

            }

            else
            {
                while(i<capacity)
                {
                    cout<<arr[i]<<" ";
                    i++;
                }
                i=0;
                while(i<=j)
                {
                    cout<<arr[i]<<" ";
                    i++;
                }
                cout<<endl;

            }

        }



};
int main()
{
    Queue q;
    q.enqueue(45);
    q.enqueue(450);
    q.enqueue(98);
    q.enqueue(19);
    q.enqueue(29);
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // q.dequeue();
    //  cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    q.print();
    q.dequeue();
    q.print();
    q.dequeue();
    
    q.print();
    q.dequeue();
    
    q.print();
    q.dequeue();
    q.enqueue(-3);
    q.enqueue(-4);
    q.enqueue(-100);
    q.enqueue(-188);
    q.print();
    
    


    





   return 0;
}