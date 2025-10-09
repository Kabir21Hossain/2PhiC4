#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &nums)
{

    int left = 0, max_len = 0, zero_count = 0;

    for (int right = 0; right < nums.size(); right++)
    {

        if (nums[right] == 0)
        {
            zero_count += 1;
        }

        while (zero_count > 1)
        {

            if (nums[left] == 0)
            {

                zero_count -= 1;
            }

            left += 1;
        }

        max_len = max(max_len, right - left);
    }

    return max_len;
}

int main()
{

    vector<int> nums = {1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1};
    cout << longestSubarray(nums);

    return 0;
}