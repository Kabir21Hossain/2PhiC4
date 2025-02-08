
//1.

// #include<bits/stdc++.h>
// using namespace std;
// class counter{
//     protected:
//         unsigned int count;
//     public:
//         counter():count(0){}

//         counter(int a):count(a){}
//         int get_count()
//         {
//             return count;

//         }

//         counter operator++()
//         {
//             return counter(++count);

//         }
//         ~counter(){}

// };

// class countdn: public counter{
//     public:
//        counter operator --()
//         {
//             return counter(--count);

//         }

// };
// int main()
// {
//     countdn c;
//      cout<<c.get_count()<<endl;
//     ++c;
//      cout<<c.get_count()<<endl;
//     ++c;
//      cout<<c.get_count()<<endl;
//      ++c;
//       cout<<c.get_count()<<endl;
//       --c;
//       --c;
//        cout<<c.get_count()<<endl;



    
//    return 0;
// }


// 2


// #include<bits/stdc++.h>
// using namespace std;
// class counter
// {
//     protected:
//         unsigned int count;
//     public:

//         counter():count(0){}
//         counter(int c):count(c){}
//         ~counter(){}
//         unsigned int get_count(){return count;}
//         counter operator ++(){return counter(++count);}
       
        
//         };
// class countdn: public counter{
//         public:
//             countdn():counter(){}

//             countdn(int a):counter(a){}
           

//             countdn operator--()
//             {
//                 return countdn(--count);

//             }
// };
// int main()
// {
//     countdn c1;
//     countdn c2(300);
//     cout<<c1.get_count()<<" "<<c2.get_count()<<endl;
//     ++c1;
//     ++c1;
//     ++c1;
//     ++c1;
//     ++c2;
//     ++c2;
//     ++c2;
//     cout<<c1.get_count()<<" "<<c2.get_count()<<endl;
//    countdn c3=--c1;
//    countdn c4=--c2;
//    cout<<c3.get_count()<<" "<<c4.get_count()<<endl;
  

//    return 0;
// }


// 3


// #include<bits/stdc++.h>
// using namespace std;
// class Stack1{
//    protected:
//         enum{max=5};
//         int arr[max];
        
//     public:
//         int top;    
//         Stack1():top(-1){}
//         void push(int a)
//         {
//             arr[++top]=a;

//         }

//         int  pop()
//         {
//             return arr[top--];

//         }

// };

// class Stack2:public Stack1{
//     public:

//         void push(int x)
//         {
//             if(top>max)
//             {
//                 cout<<"overflow"<<endl;
//                 return ;
//             }

//            Stack1::push(x);
           
//         }

//     int pop()
//     {
//         if(top<0)
//         {
//             cout<<" underflow\n";
//             exit(1);

//         }

//         Stack1:: pop();

//     }


// };

// int main()
// {
//     Stack2 st;
//     st.push(34);
//     st.push(45);
//     st.push(4);
//     st.push(200);
//     st.push(23);
//     cout<<st.pop();
    
//    return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class employee{
//    private:
//         string name;
//         string phone_number;
//     public:
//     void getdata()
//     {
//         cout<<" Enter your name: ";
//         cin>>name;
//         cout<<" Enter your phone_number:";
//         cin>>phone_number;

//     }

//     void putdata() const
//     {
//         cout<<" Name:"<<name<<endl;
//         cout<<" Phone_Number:"<<phone_number<<endl;

//     }
// };

// class manager: public employee{
//     private: 
//         string title;
//         double dues;
    
//     public:
//         void getdata()
//         {
//             employee:: getdata();
//             cout<<" Enter your title:"; cin>>title;
//             cout<<" Enter your dues:"; cin>>dues;

//         }

//         void putdata()
//         {
//             employee :: putdata();
//             cout<<"Title:"<<title<<endl;
//             cout<<" Dues:"<<dues<<endl;

//         }

// };

// class scientist: public employee{
//     private: 
//         int pubs;
//     public:
//         void getdata()
//         {
//             employee:: getdata();
//             cout<<" Number of your publications:"; cin>>pubs;

//         }

//         void putdata()
//         {
//             employee:: putdata();
//             cout<<" publications: "<<pubs<<endl;
//         }



// };

// class laborer: public employee
// {

// };




// int main()
// {
//     manager m1,m2;
//     scientist s;
//     laborer l;

//     cout<<" Enter data for manager1:"<<endl;
//     m1.getdata();
//     cout<<" Enter get data for manager2"<<endl;
//     m2.getdata();
//     cout<<" Enter data for scientist:"<<endl;
//     s.getdata();
//     cout<<" Enter data for laborer:"<<endl;
//     l.getdata();

//     cout<<" \n Manager1\n";
//     m1.putdata();
//     cout<<" \n Manager 2\n";
//     m2.putdata();
//     cout<<"\n Scientist\n";
//     s.putdata();
//     cout<<"\n laborer\n";
//     l.putdata();
    


//    return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class nodes
{
    public:
        nodes* left;
        nodes*right;
        int value;


};

class bst{
    private:
        nodes * root;
    public:

        bst(){
            root=nullptr;

        }

    nodes * createnode(int val)
    {
        nodes * newnode=new nodes;
        newnode->left=nullptr;
        newnode->right=nullptr;
        newnode->value=val;
        return newnode;


    }

};
void copystr(char *ch1,char * ch)
{
    while(*ch)
    {
        *ch1++=*ch++;
    }
    
}

int main()
{
    //int var=249;
    // cout<<&var<<endl;
    // cout<<*&var<<endl;
    // int * p=&var;
    // cout<<*p<<endl;

    // nodes * n;
    // nodes n1;
    // n1.value=89;
    // n=&n1;
    // cout<<n->value;
    // void *vp;
    // int *a=reinterpret_cast<int*>(vp);
//    int * arr=new int[3];
//    delete []arr;

char ch[]="i love you";
char *ch1;
copystr(ch1,ch);
cout<<ch1;





   return 0;
}