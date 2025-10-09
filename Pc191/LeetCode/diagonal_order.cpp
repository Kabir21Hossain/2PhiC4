#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    int row = 0, col = 0, direction = 1;

    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    vector<int> result;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < m * n; i++)
    {

        result.push_back(mat[row][col]);

        if (direction == 1)
        {

            if (col == n - 1)
            {
                row += 1;
                direction = -1;
            }

            else if (row == 0)
            {
                col += 1;
                direction = -1;
            }

            else
            {
                row -= 1;
                col += 1;
            }
        }

        else
        {

            if (row == m - 1)
            {
                col += 1;
                direction = 1;
            }

            else if (col == 0)
            {
                row += 1;
                direction = 1;
            }

            else
            {
                row += 1;
                col -= 1;
            }
        }
    }

    for (auto x : result)
    {
        cout << x << " ";
    }

    return 0;
}