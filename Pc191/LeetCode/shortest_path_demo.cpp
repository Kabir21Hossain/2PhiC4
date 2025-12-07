#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> shortest_path(vector<vector<char>>& grid,
                                    int sx, int sy, char target) {

    int n = grid.size();
    int m = grid[0].size();

    vector<vector<bool>> visited(n, vector<bool>(m, false));

    queue<pair<int,int>> q;
    map<pair<int,int>, pair<int,int>> parent;

    q.push({sx, sy});
    visited[sx][sy] = true;

    vector<pair<int,int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    while (!q.empty()) {
        pair<int,int> f = q.front();
        q.pop();

        int fx = f.first;
        int fy = f.second;

        if (grid[fx][fy] == target) {
            vector<pair<int,int>> path;
            pair<int,int> cur = {fx, fy};

            while (!(cur.first == sx && cur.second == sy)) {
                path.push_back(cur);
                cur = parent[cur];
            }
            path.push_back({sx, sy});
            reverse(path.begin(), path.end());
            return path;
        }

        for (size_t i = 0; i < dirs.size(); i++) {
            int dx = dirs[i].first;
            int dy = dirs[i].second;

            int nx = fx + dx;
            int ny = fy + dy;

            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (visited[nx][ny]) continue;
            if (grid[nx][ny] == '#') continue;

            visited[nx][ny] = true;
            parent[{nx, ny}] = make_pair(fx, fy);
            q.push({nx, ny});
        }
    }

    return {};  // no path
}


int main() {
    vector<vector<char>> grid = {
        {'S', '.', '.', '#', 'T'},
        {'.', '#', '.', '.', '.'},
        {'.', '.', '.', '#', '.'}
    };

    vector<pair<int,int>> path = shortest_path(grid, 0, 0, 'T');

    if (path.empty()) {
        cout << "No path found\n";
    } else {
        cout << "Path:\n";
        for (auto p : path) {
            cout << "(" << p.first << "," << p.second << ")\n";
        }
    }

    return 0;
}
