#include <bits/stdc++.h>
using namespace std;

class Solutuion
{
public:
    vector<vector<int>> getSkyline(vector<vector<int>> &buildings)
    {
        vector<pair<int, int>> events;

        for (auto &b : buildings)
        {
            int l = b[0], r = b[1], h = b[2];
            events.push_back({l, -h});
            events.push_back({r, h});
        }

        sort(events.begin(), events.end(), [](auto &a, auto &b)
             {
                if(a.first==b.first)return a.second<b.second;
                return a.first<b.first; });

        multiset<int> heights = {0};
        int prevMax = 0;
        vector<vector<int>> result;

        for (auto &[x, h] : events)
        {
            if (h < 0)
                heights.insert(-h);
            else
                heights.erase(heights.find(h));

            int cur_max = *heights.rbegin();

            if (curMax != prevMax)
            {
                result.push_back({x, cur_max});
                prevMax = curMax;
            }
        }

        return result;
    }
};

int main()
{

    return 0;
}