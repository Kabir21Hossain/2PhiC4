#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &mat)
    {

        int m = mat.size();
        int n = mat[0].size();

        unordered_map<int, vector<int>> diag;
        vector<int> result;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                diag[i + j].push_back(mat[i][j]);
            }
        }

        for (int d = 0; d < m + n - 1; d++)
        {
            if (d % 2 == 0)
            {
                reverse(diag[d].begin(), diag[d].end());
            }

            result.insert(result.end(), diag[d].begin(), diag[d].end());
        }

        return result;
    }
};

int main()
{
    Solution sol;

    vector<vector<int>> mat = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> res = sol.findDiagonalOrder(mat);

    for (int x : res)
    {
        cout << x << " ";
    }

    return 0;
}