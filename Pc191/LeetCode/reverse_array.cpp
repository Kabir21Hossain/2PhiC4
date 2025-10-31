#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {4, 5, 2, 9, 8, 23};
    int n = v.size();
    int l = 1;
    int r = 4;
    int mid = (l + r) / 2;

    while (l <= mid)
    {

        int temp = v[l];
        v[l] = v[r];
        v[r] = temp;

        l += 1;
        r -= 1;
    }

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}