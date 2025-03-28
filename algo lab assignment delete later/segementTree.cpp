#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000;  // Maximum array size
int n, q;
int ara[MAX_N], minTree[4 * MAX_N], maxTree[4 * MAX_N], sumTree[4 * MAX_N];

// Build Segment Trees (Min, Max, Sum)
void build(int node, int start, int end) {
    if (start == end) {
        minTree[node] = maxTree[node] = sumTree[node] = ara[start];
        return;
    }
    int mid = (start + end) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);

    minTree[node] = min(minTree[2 * node], minTree[2 * node + 1]);
    maxTree[node] = max(maxTree[2 * node], maxTree[2 * node + 1]);
    sumTree[node] = sumTree[2 * node] + sumTree[2 * node + 1];
}

// Range Queries (Min, Max, Sum)
int rangeQuery(int node, int start, int end, int l, int r, char type) {
    if (r < start || l > end) {
        if (type == 'm') return INT_MAX; // Min Query
        if (type == 'M') return INT_MIN; // Max Query
        return 0; // Sum Query
    }
    if (l <= start && end <= r) {
        if (type == 'm') return minTree[node];
        if (type == 'M') return maxTree[node];
        return sumTree[node];
    }
    int mid = (start + end) / 2;
    int leftResult = rangeQuery(2 * node, start, mid, l, r, type);
    int rightResult = rangeQuery(2 * node + 1, mid + 1, end, l, r, type);

    if (type == 'm') return min(leftResult, rightResult);
    if (type == 'M') return max(leftResult, rightResult);
    return leftResult + rightResult;
}

// Point Update (Change single element)
void pointUpdate(int node, int start, int end, int idx, int newValue) {
    if (start == end) {
        minTree[node] = maxTree[node] = sumTree[node] = newValue;
        ara[idx] = newValue;
        return;
    }
    int mid = (start + end) / 2;
    if (idx <= mid) pointUpdate(2 * node, start, mid, idx, newValue);
    else pointUpdate(2 * node + 1, mid + 1, end, idx, newValue);

    minTree[node] = min(minTree[2 * node], minTree[2 * node + 1]);
    maxTree[node] = max(maxTree[2 * node], maxTree[2 * node + 1]);
    sumTree[node] = sumTree[2 * node] + sumTree[2 * node + 1];
}

int main() {
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Input array (1-based index): ";
    for (int i = 1; i <= n; i++) cin >> ara[i];

    build(1, 1, n);

    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        char type;
        cout << "Enter query type (m=Min, M=Max, s=Sum, u=Update): ";
        cin >> type;

        if (type == 'm' || type == 'M' || type == 's') {
            int l, r;
            cout << "Enter query range (L R) [1-based]: ";
            cin >> l >> r;
            if (l < 1 || r > n || l > r) {
                cout << "Invalid range! Try again.\n";
                continue;
            }
            cout << "Result: " << rangeQuery(1, 1, n, l, r, type) << endl;
        } else if (type == 'u') {
            int idx, newValue;
            cout << "Enter index and new value (1-based): ";
            cin >> idx >> newValue;
            if (idx < 1 || idx > n) {
                cout << "Invalid index! Try again.\n";
                continue;
            }
            pointUpdate(1, 1, n, idx, newValue);
            cout << "Update successful!\n";
        } else {
            cout << "Invalid query type! Try again.\n";
        }
    }
    return 0;
}
