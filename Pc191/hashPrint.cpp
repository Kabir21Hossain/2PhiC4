#include<bits/stdc++.h>
using namespace std;
void hash_print(int x)
{
    for(int i=1;i<=x;i++)
    {
        cout<<"#";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    for(int line=1;line<=n;line++)
    hash_print(line);
    
return 0;
}