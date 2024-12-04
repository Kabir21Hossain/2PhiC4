#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// A utility function to perform counting sort based on the digit represented by exp.
void countingSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n);  // Output array to store sorted numbers
    int count[10] = {0};    // Count array for digits (0-9)

    // Count the occurrences of each digit at the given position
    for (int i = 0; i < n; i++) {
        int index = (arr[i] / exp) % 10;
        count[index]++;
    }

    // Update count[i] to store the cumulative count
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        int index = (arr[i] / exp) % 10;
        output[count[index] - 1] = arr[i];
        count[index]--;
    }

    // Copy the sorted numbers back into the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// The main function to implement Radix Sort

void radixSort(vector<int>& arr) {
    // Find the maximum number to know the number of digits
    int maxNum = *max_element(arr.begin(), arr.end());

    // Perform counting sort for every digit
    for (int exp = 1; maxNum / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

int main() {
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    radixSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
