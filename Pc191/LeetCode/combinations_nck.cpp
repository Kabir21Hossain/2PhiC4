#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sol(int n, int k)
{
    vector<vector<int>> result;
    vector<int> path;
    function<void(int)> backtrack = [&](int index)
    {
        if (path.size() == k)
        {
            result.push_back(path);
            return;
        }

        for (int i = index; i <= n; i++)
        {
            path.push_back(i);
            backtrack(i + 1);
            path.pop_back();
                }
    };
    backtrack(1);
    return result;
}
int main()
{
    vector<vector<int>> res = sol(4, 2);

    for (auto &x : res)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}