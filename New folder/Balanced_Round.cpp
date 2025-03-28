#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int item = 1, maxGroup = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1] - v[i] <= k)
            {
                item++;
            }
            else
            {
                maxGroup = max(maxGroup, item);
                item = 1;
            }
        }
        
        maxGroup = max(maxGroup, item);

        cout << (n - maxGroup) << endl;
    }
    return 0;
}
