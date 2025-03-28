#include <bits/stdc++.h>
using namespace std;

int kadaneMaxSubarray(vector<int>& arr) {
    int maxSum = INT_MIN, currSum = 0;
    
    for (int num : arr) {
        currSum += num;
        maxSum = max(maxSum, currSum);
        if (currSum < 0) currSum = 0;
    }
    return maxSum;
}

int main() {
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    vector<int>arr(n);

   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   
    cout << "Maximum Subarray Sum (Kadane's Algorithm): " << kadaneMaxSubarray(arr) << endl;
    return 0;
}
