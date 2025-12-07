#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "amxyz";
    string s2 = "bmly";

    int n1 = s1.size();
    int n2 = s2.size();

    int dp[n2 + 1][n1 + 1];

    for (int i = 0; i <= n2; i++)
    {
        dp[i][0] = i;
    }

    for (int i = 0; i <= n1; i++)
    {
        dp[0][i] = i;
    }

    for (int i = 1; i <= n2; i++)
    {
        for (int j = 1; j <= n1; j++)
        {
            if (s1[j - 1] == s2[i - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1])) + 1;
            }
        }
    }

    cout << dp[n2][n1];

    return 0;
}