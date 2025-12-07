#include <bits/stdc++.h>
using namespace std;
vector<string> binary_string(int n, int k)
{
    vector<string> res;
    string path = "";
    function<void(int, int)> backtrack = [&](int index, int ones_count)
    {
        if (path.size() == n)
        {
            if (ones_count == k)
            {
                res.push_back(path);
            }
            return;
        }

        path.push_back('0');
        backtrack(index + 1, ones_count);
        path.pop_back();

        if (ones_count < k)
        {
            path.push_back('1');
            backtrack(index + 1, ones_count + 1);
            path.pop_back();
        }
    };
    backtrack(0, 0);
    return res;
}

int main()
{

    vector<string> v = binary_string(4, 2);
    for (string s : v)
    {
        cout << s << endl;
    }
    return 0;
}