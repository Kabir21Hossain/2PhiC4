#include<bits/stdc++.h>
using namespace std;
int a=0;
void tower(int n,char source,char target,char auxilary)
{
    if(n==1)
    {
        cout<<"move source to target\n";
        a++;
        return;
    }

    tower(n-1,source,auxilary,target);
    cout<<"move source to auxilary\n";
    a++;
    tower(n-1,auxilary,target,source);
    


    

}
int main()
{
    int n;
    cout<<"Enter number of disk\n";
    cin>>n; 
    tower(n,'A','B','C');
    cout<<"Total number of move:"<<a<<endl;
   return 0;
}