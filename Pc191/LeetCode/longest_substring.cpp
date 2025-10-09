// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string s;
//     cin >> s;

//     vector<char> v;
//     int maxi = 0;

//     for (int i = 0; i < s.size(); i++)
//     {

//         int k = -1;

//         for (int j = 0; j < v.size(); j++)
//         {
//             if (s[i] == v[j])
//             {
//                 k = j;
//                 break;
//             }
//         }

//         if (k != -1)
//         {
//             v.erase(v.begin(), v.begin() + k + 1);
//         }

//         v.push_back(s[i]);
//         maxi = max(maxi, (int)v.size());
//     }

//     cout << maxi << endl;

//     return 0;
// }

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string s;
    cin >> s;
    int left=0,max_len=0;

    map<char,int>last_index;

    for( int right=0 ; right<s.size() ; right++){

        char c=s[right];
        if(last_index.find(c) != last_index.end() && last_index[c] >= left){
            left=last_index[c]+1;

        }

        last_index[c]=right;
        max_len=max(max_len,right-left+1);




    }

    cout<<max_len;
    
    
    return 0;
}
