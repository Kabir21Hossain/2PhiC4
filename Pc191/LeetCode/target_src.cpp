#include <bits/stdc++.h>
using namespace std;

bool find(vector<vector<char>> &v, int src, int dest, char target)
{
    int row = v.size();
    int col = v[0].size();

    vector<vector<bool>> visited(row, vector<bool>(col, false));
    function<bool(int, int)> dfs = [&](int x, int y)
    {
        if ((x >= n || x < 0) && (y > m || y < 0))
        {
            return false;
        }

        if (visited[x][y])
            return false;

        if (grid[x][y] == target)
        {
            return true
        }

        visited[x][y] = true;

        return dfs(x + 1, y) || dfs(x - 1, y) || dfs(x, y + 1) || dfs(x, y - 1);
    };

    return dfs(grid,src,dest)
}

int main()
{
    vector<vector<char>> grid = {
        {'A', 'X', 'X'},
        {'B', 'C', 'D'},
        {'E', 'F', 'G'}};

    int x = 0, y = 0;
    char target = 'G';

    if (find(grid, x, y, target))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    return 0;
}