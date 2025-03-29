#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s)
{
     if(s.size()==1 || s.size()==0)
     return true;
    if(s[0]!=s[s.size()-1] && !s.empty())
    return false;
    string str=s.substr(1,s.size()-2);
    return palindrome(str);

}


int main()
{
    string s;
    cin>>s;
    if(palindrome(s))
    cout<<" yes its palindrome"<<endl;
    else cout<<" not palindrome\n";


   return 0;
}