#include <bits/stdc++.h>
using namespace std;

int find_y(int x) {
    
    for (int i = 1; i < x; i <<= 1) {
        int y = x - i;  
        if ((x + y) > (x ^ y)) return y;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << find_y(x) << '\n';
    }
    return 0;
}
