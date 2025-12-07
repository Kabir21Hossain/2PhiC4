#include <bits/stdc++.h>
using namespace std;

vector<string> sol(int n)
{
    vector<string> result;
    string path = "";

    function<void(int)> backtrack = [&](int index)
    {
        if (n == index)
        {
            result.push_back(path);
            return;
        }

        path.push_back('0');
        backtrack(index + 1);
        path.pop_back();

        if (path.empty() || path.back() == '0')
        {
            path.push_back('1');
            backtrack(index + 1);
            path.pop_back();
        }
    };

    backtrack(0);
    return result;
}

int main()
{
    vector<string> ans = sol(3);

    for (string s : ans)
    {
        cout << s << " ";
    }
}