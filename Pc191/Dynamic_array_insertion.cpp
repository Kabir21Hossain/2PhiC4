#include<bits/stdc++.h>
using namespace std;
/*
class Array{
    private:
        
        int *arr;
        int cap;
        int sz;

        void Increase_capacity()
        {
            cap=cap*2;
            int *tmp=new int[cap];
            for(int i=0;i<sz;i++)
            {
                tmp[i]=arr[i];

            }
            delete [] arr;
            arr=tmp;


        }

    public:

        Array()
        {
            arr=new int[1];
            cap=1;
            sz=0;

        }
    
    void Push_back(int x)
    {
        if(sz==cap)
        {
            Increase_capacity();
        }
        arr[sz]=x;
        sz++;

    }

    int getSize()
    {
        return sz;

    }

    int get_element(int idx)
    {
        if(idx>sz)
        {
            cout<<"Out of bounds\n";
           
        }
        else
        return arr[idx];

    }

    void Clear()
    {
        delete [] arr;
        sz=0;
    }
    bool isEmpty()
    {
        if(sz==0)
        {
            return true;
        }
        else return false;
    }

    void Pop_back()
    {
        if(sz==0)
        cout<<"underFlow\n";
        else 
        {
            sz--;

        }

    }

    void print()
    {
        for(int i=0;i<sz;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }

    void Insert(int pos,int x)
    {
        if(pos>sz)
        {
            cout<<"out of bounds\n";

        }
        else
        {
            for(int i=sz-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=x;
        sz++;
        }
        
    }
    void Erase(int pos)
    {
        for(int i=pos;i<=sz;i++)
        {
            arr[i]=arr[i+1];

        }
        sz--;

    }
};
*/
class Array{
    private:
        int *a;
        int cap;
        int sz;
        void Increase_capacity()
        {
            cap=cap*2;
            int *tmp=new int[cap];
            for(int i=0;i<sz;i++)
            {
                tmp[i]=a[i];
            }
            delete []a;
            a=tmp;
            
        }

    public:
        Array()
        {
            a=new int [1];
            cap=1;
            sz=0;
        }

    void Push_back(int x)
    {
        if(cap==sz)
        {
            //double the size of the array
            Increase_capacity();

        }
       
        

            a[sz]=x;
             sz++;
        
    
    }

    int getSize()
    {
        return sz;

    }

    int getElement(int idx)
    {
        if(idx<=sz)
        {
            return a[idx];
        }
        else 
        {
            cout<<"Out of bounds\n";
        }
    }

    void Insert(int pos,int val)
    {
        if(cap==sz)
        {
            Increase_capacity();
        }

        for(int i=sz;i>=pos;i--)
        {
            a[i+1]=a[i];

        }
        a[pos]=val;
        sz++;
    }
    void Pop_back()
    {
        if(sz==0)
        {
            cout<<"Underflow\n";

        }
        else 
        sz--;
    }

    void Erase(int idx)
    {
        if(idx>sz)
        {
            cout<<"overflow\n";
            
        }
        else 
        {
            for(int i=idx;i<sz;i++)
            {
                a[i]=a[i+1];

            }
            sz--;
        }


    }

    bool isEmpty()
    {
        return sz;

    }
    void Clear()
    {
        delete []a;
    }

    void print()
    {
        for(int i=0;i<sz;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }


};
int main()
{
    Array a;
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);
    a.Push_back(60);
    a.Push_back(70);
    a.Push_back(80);
    a.print();
    a.Clear();
    if(a.isEmpty())
    {
        cout<<"Empty"<<endl;

    }
    

   
    // a.Insert(3,100);
    // a.print();

    // cout<<endl<<"size:"<<a.getSize()<<endl;
    // cout<<"Element at index 3:"<<a.getElement(3)<<endl;



  
    return 0;
} 