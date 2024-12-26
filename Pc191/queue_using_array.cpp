#include<bits/stdc++.h>
using namespace std;
#define  capacity 50
class Queue{
    private:
        int arr[capacity];
        int front;
        int rear;
        
    public:

    Queue()
    {
        for(int i=0;i<capacity;i++)
        {
            arr[i]=0;
        }
        
        front=0;
        rear=-1;


    }


    void enqueue(int value)
    {
        if(rear+1>capacity)
        {
             return;

        }
       
       
        arr[++rear]=value;


    }

    void dequeue()
    {
        if(front>=0 && front<=rear)
        {
            front=front+1;
            

        }
        


    }

    int len()
    {
        return rear-front+1;

    }
    int Front()
    {
        return arr[front];
    }

    int back()
    {
        return arr[rear];

    }

    void print()
    {
        int l=front;
        int r=rear;

        while(l<=r)
        {
            cout<<arr[l]<<" ";
            l++;


        }
    }


};
int main()
{

    Queue q;
    q.enqueue(56);
    q.enqueue(34);
    q.enqueue(560);
    q.enqueue(34);
    q.enqueue(256);
    q.enqueue(544);
    cout<<"size:"<<q.len()<<endl;
    cout<<q.Front()<<endl;
    q.dequeue();
    cout<<q.Front();
    cout<<endl<<q.len()<<endl;
    q.print();


    
    
   return 0;
}