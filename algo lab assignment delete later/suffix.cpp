#include<bits/stdc++.h>
using namespace std;

vector<int> BuildSuffixArray(string S) {
    int N = S.size();
    vector<pair<string, int>> suffixes;
    for (int i = 0; i < N; i++) {
        suffixes.push_back({S.substr(i), i});
    }
    sort(suffixes.begin(), suffixes.end());
    vector<int> suffixArray;
    for (auto &s : suffixes) {
        suffixArray.push_back(s.second);
    }
    return suffixArray;
}

vector<int> PatternSearch(string S, string P, vector<int> &suffixArray) {
    int N = S.size(), M = P.size();
    vector<int> result;
    int l = 0, r = N - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        string suffix = S.substr(suffixArray[mid], M);
        if (suffix == P) {
            result.push_back(suffixArray[mid]);
            int left = mid - 1, right = mid + 1;
            while (left >= 0 && S.substr(suffixArray[left], M) == P) {
                result.push_back(suffixArray[left--]);
            }
            while (right < N && S.substr(suffixArray[right], M) == P) {
                result.push_back(suffixArray[right++]);
            }
            break;
        } else if (suffix < P) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    string S, P;

    // Input string and pattern
    cout << "Enter the string: ";
    cin >> S;
    cout << "Enter the pattern: ";
    cin >> P;

    vector<int> suffixArray = BuildSuffixArray(S);

    cout << "Suffix Array: ";
    for (int i : suffixArray) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> occurrences = PatternSearch(S, P, suffixArray);
    if (!occurrences.empty()) {
        cout << "Pattern found at indices: ";
        for (int i : occurrences) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "Pattern not found" << endl;
    }
    return 0;
}
