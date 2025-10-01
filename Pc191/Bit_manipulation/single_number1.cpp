#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {4, 3, 1, 4, 3, 1, 5, 2, 5};
    int n = v.size();
    // unordered_map<int, int> mp;

    // for (int i = 0; i < n; i++)
    // {
    //     mp[v[i]] += 1;
    // }

    // for (auto &it : mp)
    // {
    //     if (it.second == 1)
    //     {
    //         cout << it.first << endl;
    //         break;
    //     }
    // }

    int a = 0;

    for (int i = 0; i < n; i++)
    {
        a ^= v[i];
    }
    cout << a << endl;
    return 0;
}