#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    int freq[26]={0};
    for(int i=0;i<n;i++)
    {
        freq[arr[i]-'a']++;
        
    }

    for(int i=0;i<26;i++)
    {
        for(int j=0;j<freq[i];j++)
        {
            printf("%c",'a'+i);
            
        }
    }



    return 0;
}