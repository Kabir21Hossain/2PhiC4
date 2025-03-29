#include<bits/stdc++.h>
using namespace std;
int main()
{
    // dynamic memory allocation
//     int *p=new int;
//    // p=new int;
//     *p=10;
//     cout<<"address:"<<p<<endl;
//     cout<<"value:"<<*p<<endl;
//     delete p;
// char*ch=new char;
// float *f=new float;
// double *d=new double;
// *ch='k';
// cout<<*ch<<endl;
// delete ch;
// *f=56.6;
// cout<<*f<<endl;
// delete f;
// *d=567.44433;
// cout<<*d<<endl;
// delete d;


// dynamic array

int size;
cin>>size;
int *a;
a=new int[size];
for(int i=0;i<size;i++)
{
    cin>>a[i];
}
for(int i=0;i<size;i++)
{
   cout<<a[i]<<" ";
}

delete []a;

   return 0;
}