#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int>& arr) {
    int maxSum = INT_MIN, currSum = 0;
    for (int num : arr) {
        currSum += num;
        maxSum = max(maxSum, currSum);
        if (currSum < 0) currSum = 0;
    }
    return maxSum;
}

int maxSubarraySum2D(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    int maxSum = INT_MIN;

    for (int rowStart = 0; rowStart < n; rowStart++) {
        vector<int> temp(m, 0);
        for (int rowEnd = rowStart; rowEnd < n; rowEnd++) {
            for (int col = 0; col < m; col++) {
                temp[col] += matrix[rowEnd][col];
            }
            maxSum = max(maxSum, kadane(temp));
        }
    }
    return maxSum;
}

int main() {
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    vector<vector<int>> matrix(row, vector<int>(col));

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Maximum Subarray Sum (Kadane's 2D): " << maxSubarraySum2D(matrix) << endl;
    return 0;
}
