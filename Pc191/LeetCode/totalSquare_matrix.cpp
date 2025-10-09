#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    vector<vector<int>> dp(m, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        dp[0][i] = mat[0][i];
    }

    for (int i = 0; i < m; i++)
    {
        dp[i][0] = mat[i][0];
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
            }
        }
    }

    for (auto i : dp)
    {
        for (auto j : i)
        {
            cout << j;
        }

        cout << endl;
    }

    int sum = 0;

    for (auto i : dp)
    {
        for (auto j : i)
        {
            sum += j;
        }
    }
    cout << sum;

    return 0;
}