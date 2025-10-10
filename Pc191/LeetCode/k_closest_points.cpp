#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        sort(points.begin(), points.end(), [&](vector<int> &p, vector<int> &q)
             { return p[0] * p[0] + p[1] * p[1] < q[0] * q[0] + q[1] * q[1]; });
        // vector<vector<int>> result;
        // for (int i = 0; i < k; i++)
        // {
        //     result.push_back(points[i]);
        // }
        return vector<vector<int>>(points.begin(), points.begin() + k);
    }
};