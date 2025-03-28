#include<bits/stdc++.h>
using namespace std;

void computeZ(string str, vector<int>& Z) {
    int left = 0, right = 0, n = str.size();
    for (int i = 1; i < n; i++) {
        if (i <= right)
            Z[i] = min(right - i + 1, Z[i - left]);
        while (i + Z[i] < n && str[Z[i]] == str[i + Z[i]])
            Z[i]++;
        if (i + Z[i] - 1 > right) {
            left = i;
            right = i + Z[i] - 1;
        }
    }
}

void Z_Search(string text, string pattern) {
    string concat = pattern + "$" + text;
    int concatLen = concat.size();
    vector<int> Z(concatLen);
    computeZ(concat, Z);
    
    int count = 0;
    cout << "Pattern found at indices: ";
    for (int i = 0; i < concatLen; i++) {
        if (Z[i] == pattern.size()) {
            cout << (i - pattern.size() - 1) << " ";
            count++;
        }
    }
    cout << "\nTotal occurrences: " << count << endl;
}

int main() {
    string text, pattern;
    cout << "Enter text: ";
    cin >> text;
    cout << "Enter pattern: ";
    cin >> pattern;
    Z_Search(text, pattern);
    return 0;
}