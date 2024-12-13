#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int>& v, int a, int b) {
    int pivot = v[a];
    int s = a, e = b;

    while (s < e) {
        // Move `s` forward while it's within bounds and less than or equal to the pivot
        do {
            s++;
        } while (s < b && v[s] <= pivot);

        // Move `e` backward while it's greater than the pivot
        do {
            e--;
        } while (e > a && v[e] > pivot);

        // Swap elements at `s` and `e` if indices haven't crossed
        if (s < e) {
            swap(v[s], v[e]);
        }
    }

    // Place the pivot in its correct position
    swap(v[a], v[e]);
    return e;
}

void quick_sort(vector<int>& v, int a, int b) {
    if (a >= b - 1) // Base case: single-element or empty range
        return;

    int mid = partition(v, a, b);
    quick_sort(v, a, mid);       // Sort the left subarray
    quick_sort(v, mid + 1, b);   // Sort the right subarray
}

int main() {
    int n;
    cout << "Enter number of elements:\n";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    quick_sort(v, 0, v.size());

    cout << "Sorted elements:\n";
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
