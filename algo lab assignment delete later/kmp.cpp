#include<bits/stdc++.h>
using namespace std;

void computeLPS(string pattern, int M, vector<int>& lps) {
    int length = 0, i = 1;
    lps[0] = 0;
    while (i < M) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0)
                length = lps[length - 1];
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMP_Search(string text, string pattern) {
    int N = text.size();
    int M = pattern.size();
    vector<int> lps(M);
    computeLPS(pattern, M, lps);
    
    int i = 0, j = 0;
    while (i < N) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }
        if (j == M) {
            cout << "Pattern found at index " << i - j << endl;
            j = lps[j - 1];
        } else if (i < N && pattern[j] != text[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
}

int main() {
    string text, pattern;
    cout << "Enter text: ";
    cin >> text;
    cout << "Enter pattern: ";
    cin >> pattern;
    KMP_Search(text, pattern);
    return 0;
}