#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minAreaRect(vector<vector<int>> &points)
    {
        unordered_map<int, vector<int>> columns;

        for (auto &p : points)
        {
            int x = p[0], y = p[1];
            columns[x].push_back(y);
        }

        map<pair<int, int>, int> lastX;

        int min_area = INT_MAX;

        vector<int> sortedX;
        for (auto &it : columns)
            sortedX.push_back(it.first);
        sort(sortedX.begin(), sortedX.end());

        for (int x : sortedX)
        {
            vector<int> ys = columns[x];
            sort(ys.begin(), ys.end());

            for (int i = 0; i < ys.size(); i++)
            {
                for (int j = i + 1; j < ys.size(); j++)
                {
                    int y1 = ys[i];
                    int y2 = ys[j];

                    pair<int, int> key = {y1, y2};

                    if (lastX.count(key))
                    {
                        int area = (x - lastX[key]) * (y2 - y1);
                        min_area = min(min_area, area);
                    }

                    lastX[key] = x;
                }
            }
        }

        return (min_area == INT_MAX) ? 0 : min_area;
    }
};

int main()
{

    return 0;
}