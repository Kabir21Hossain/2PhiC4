#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        if (n == 0)
            return "";

        int start = 0, max_len = 0;

        vector<vector<int>> dp(n, vector<int>(n));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                dp[i][j] = 0;
            }
        }

        // length=1

        for (int i = 0; i < n; i++)
        {
            dp[i][i] = 1;
        }
        max_len = 1;

        // length=2

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                dp[i][i + 1] = 1;
                start = i;
                max_len = 2;
            }
        }

        // length>=3

        for (int length = 3; length <= n; length++)
        {
            for (int i = 0; i < n - length + 1; i++)
            {
                int j = i + length - 1;

                if (s[i] == s[j] and dp[i + 1][j - 1])
                {
                    dp[i][j] = 1;
                    if (length > max_len)
                    {
                        max_len = length;
                        start = i;
                    }
                }
            }
        }

        return s.substr(start, max_len);
    }
};

int main()
{
    Solution s;
    string a = s.longestPalindrome("abbabababac");
    cout << a;

    return 0;
}