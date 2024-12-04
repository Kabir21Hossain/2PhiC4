#include <bits/stdc++.h>
using namespace std;

// Function to perform counting sort based on a specific digit represented by exp
void countSort(vector<int>& v, int exp) {
    vector<int> output(v.size()); // Output array to hold sorted numbers
    int count[10] = {0};          // Count array for digits (0-9)

    // Count occurrences of each digit at the current place value
    for (int i = 0; i < v.size(); i++) {
        int index = (v[i] / exp) % 10;
        count[index]++;
    }

    // Update count array to store cumulative counts
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array in reverse to maintain stability
    for (int i = v.size() - 1; i >= 0; i--) {
        int index = (v[i] / exp) % 10;
        output[count[index] - 1] = v[i];
        count[index]--;
    }

    // Copy the sorted numbers back to the original array
    for (int i = 0; i < v.size(); i++) {
        v[i] = output[i];
    }
}

// Radix Sort function
void radix_sort(vector<int>& v) {
    // Find the maximum number to determine the number of digits
    int maxNum = *max_element(v.begin(), v.end());

    // Perform counting sort for each digit (1s, 10s, 100s, etc.)
    for (int exp = 1; maxNum / exp > 0; exp *= 10) {
        countSort(v, exp);
    }
}

// Utility function to print the array
void print(const vector<int>& v) {
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Sort the array using Radix Sort
    radix_sort(v);

    // Print the sorted array
    cout << "Sorted array: ";
    print(v);

    return 0;
}
