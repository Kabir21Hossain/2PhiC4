#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     vector<vector<int>> subset_all(vector<int> &v)
//     {
//         vector<vector<int>> result = {{}};
//         int n = v.size();

//         for (int x : v)
//         {
//             int s = result.size();
//             for (int i = 0; i < s; i++)
//             {
//                 vector<int> new_set = result[i];
//                 new_set.push_back(x);
//                 result.push_back(new_set);
//             }
//         }

//         return result;
//     }
// };

// int main()
// {
//     Solution s;
//     vector<vector<int>> v = s.subset_all(*new vector<int>{1, 2, 3});

//     for (vector<int> x : v)
//     {
//         for (int y : x)
//         {
//             cout << y << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

void backtrack(int i, int n, vector<vector<int>> &res, vector<int> &sol, vector<int> &nums)
{
    if (i == n)
    {
        res.push_back(sol);
        return;
    }

    sol.push_back(nums[i]);
    backtrack(i + 1, n, res, sol, nums);
    sol.pop_back();
    backtrack(i + 1, n, res, sol, nums);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> res;
    vector<int> sol;

    backtrack(0, n, res, sol, nums);

    return res;
}

int main()
{

    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);

    for (auto x : result)
    {
        for (int &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}