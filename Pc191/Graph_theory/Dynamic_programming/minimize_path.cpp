#include <bits/stdc++.h>
using namespace std;

const int N = 101;
int dp[N][N], grid[N][N];

int mini_path(int n, int m) {
    if(n == 0 && m == 0)
        return grid[n][m];

    if(dp[n][m] != -1)
        return dp[n][m];

    int ans = INT_MAX;

    if(n > 0)
        ans = min(ans, mini_path(n-1, m) + grid[n][m]);

    if(m > 0)
        ans = min(ans, mini_path(n, m-1) + grid[n][m]);

    return dp[n][m] = ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
            dp[i][j] = -1;
        }
    }

    cout << mini_path(n-1, m-1) << endl;

    return 0;
}
