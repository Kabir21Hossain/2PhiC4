#include<bits/stdc++.h>
using namespace std;
int summ(int x)
{
    if(x==1)
    return 1;
    else return x+summ(x-1);


}

int main()
{
    int n;
    cin>>n;
    int y=summ(n);
    cout<<y<<endl;

   return 0;
}