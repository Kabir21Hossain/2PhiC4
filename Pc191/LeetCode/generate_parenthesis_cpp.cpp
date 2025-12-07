#include <bits/stdc++.h>
using namespace std;

vector<string> generateParenthesis(int n)
{
    vector<string> result;
    string sol;

    function<void(int, int)> backtrack = [&](int open, int close)
    {
        if (open == n and close == n)
        {
            result.push_back(sol);
            return;
        }

        if (open < n)
        {
            sol.push_back('(');
            backtrack(open + 1, close);
            sol.pop_back();
        }

        if (close < open)
        {
            sol.push_back(')');
            backtrack(open, close + 1);
            sol.pop_back();
        }
    };

    backtrack(0, 0);
    return result;
}

int main()
{

    int n;
    cin >> n;
    vector<string> result = generateParenthesis(n);
    for (string &s : result)
    {
        cout << s << " ";
    }

    return 0;
}