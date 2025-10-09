#include <bits/stdc++.h>
using namespace std;

int longest_distinct_substring(string s, int k)
{
    int left = 0, max_len = 0;
    unordered_map<char, int> mp; // frequency map
    int n = s.size();

    for (int right = 0; right < n; right++)
    {
        mp[s[right]]++;

        // shrink window if more than k distinct chars
        while (mp.size() > k)
        {
            mp[s[left]]--;
            if (mp[s[left]] == 0)
            {
                mp.erase(s[left]);
            }
            left++;
        }

        // update max length
        max_len = max(max_len, right - left + 1);
    }

    return max_len;
}

int main()
{
    cout << longest_distinct_substring("eceba", 2) << endl; // Output: 3
    return 0;
}
