#include <iostream>
#include <String>

using namespace std;

int main()
{
    string s1 = "abclt";
    string s2 = "dddccxm";
    int best = 0;
    int index = 0;

    int n1 = s1.size();
    int n2 = s2.size();

    int dp[n1 + 1][n2 + 1];

    for (int i = 0; i <= n2; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 0; i <= n1; i++)
    {
        dp[i][0] = 0;
    }

    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > best)
                {
                    best = dp[i][j];
                    index = i - 1;
                }
            }

            else
            {
                dp[i][j] = 0;
            }
        }
    }

    cout << s1.substr(index - best + 1, best);
    cout << endl;
    cout << best;

    return 0;
}