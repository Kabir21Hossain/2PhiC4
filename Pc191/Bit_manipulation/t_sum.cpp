#include <bits/stdc++.h>
class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        int s = nums.size();
        for (int i = 0; i < s; i++)
        {
            vector<int> v;
            if (nums.size() == 1)
            {
                break;
            }
            for (int j = 0; j < nums.size() - 1; j++)
            {
                v.push_back((nums[j] + nums[j + 1]) % 10);
            }

            nums = v;
        }

        return nums[0];
    }
};