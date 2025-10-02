#include <bits/stdc++.h>
using namespace std;

class Event
{
public:
    int x, y1, y2, type;

    bool operator<(const Event &other) const
    {
        return x < other.x;
    }
};

int merged_y(vector<pair<int, int>> &active)
{
    if (active.empty())
    {
        return 0;
    }

    sort(active.begin(), active.end());

    int cur_start = active[0].first;
    int cur_end = active[0].second;

    int total = 0;
    for (int i = 1; i < active.size(); i++)
    {
        int start = active[i].first;
        int end = active[i].second;

        if (start > cur_end)
        {

            total += cur_end - cur_start;
            cur_start = start;
            cur_end = end;
        }

        else
        {
            cur_end = max(cur_end, end);
        }
    }
    total += cur_end - cur_start;

    return total;
}

int rectangle_union_area(vector<array<int, 4>> &rects)
{
    vector<Event> events;

    for (auto &r : rects)
    {
        int x1 = r[0], y1 = r[1], x2 = r[2], y2 = r[3];

        events.push_back({x1, y1, y2, 1});
        events.push_back({x2, y1, y2, -1});
    }

    sort(events.begin(), events.end());

    vector<pair<int, int>> active;
    int area = 0;
    int prev_x = events[0].x;

    for (auto &e : events)
    {
        int del_y = merged_y(active);
        int x = e.x, y1 = e.y1, y2 = e.y2, type = e.type;
        area += del_y * (x - prev_x);

        if (type == 1)
        {
            active.push_back({y1, y2});
        }

        else
        {

            for (auto it = active.begin(); it != active.end(); it++)
            {
                if (it->first == y1 && it->second == y2)
                {
                    active.erase(it);
                    break;
                }
            }
        }
        prev_x = x;
    }

    return area;
}

int main()
{
    /*
        array<int, 5> arr = {2, 4, 10, 3, 1};
        cout << "size:" << arr.size() << endl;
        cout << "max-size: " << arr.max_size() << endl;
        cout << "empty check:" << arr.empty() << endl;

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;

        for (int x : arr)
        {
            cout << x << " ";
        }
        cout << endl;

        for (auto it = arr.begin(); it != arr.end(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;

        cout << *arr.begin() << endl;
        cout << *arr.end() << endl;
        cout << arr.front() << endl;
        cout << arr.back() << endl;

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr.at(i) << " ";
        }
        cout << endl;

        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr.at(i) << " ";
        }

        cout << endl;

        reverse(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr.at(i) << " ";
        }

    */

    vector<array<int, 4>> rects = {
        {1, 1, 3, 3},
        {2, 2, 4, 4},
        {3, 1, 4, 2},
        {5, 1, 6, 3}

    };

    cout << "union area: " << rectangle_union_area(rects) << "\n";
    return 0;
}