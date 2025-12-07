#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>> &grid, int m, int n, int h, int k, vector<vector<bool>> &visited)
{
    // Correct boundary check
    if (h < 0 || h >= m || k < 0 || k >= n)
        return;

    if (visited[h][k] || grid[h][k] == '#')
        return;

    visited[h][k] = true;
    cout << "(" << h << "," << k << ")" << endl;

    dfs(grid, m, n, h + 1, k, visited);
    dfs(grid, m, n, h - 1, k, visited);
    dfs(grid, m, n, h, k + 1, visited);
    dfs(grid, m, n, h, k - 1, visited);
}

void flood_fill(vector<vector<char>> &grid, int h, int k)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    dfs(grid, m, n, h, k, visited);
}

int main()
{
    int h = 0, k = 0;

    vector<vector<char>> grid = {
        {'.', '.', '#', '.', '.'},
        {'.', '#', '.', '.', '#'},
        {'.', '#', '.', '.', '.'},
        {'.', '.', '.', '#', '.'},
        {'.', '#', '.', '.', '#'}};

    flood_fill(grid, h, k);

    return 0;
}
