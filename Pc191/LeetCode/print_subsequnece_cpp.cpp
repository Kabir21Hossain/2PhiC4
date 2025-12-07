#include <bits/stdc++.h>
using namespace std;

void backtrack(int index, const string &s, string &path, set<string> &result)
{
    if (index == s.size())
    {
        result.insert(path); // store unique subsequence
        return;
    }

    // 1️⃣ Include current character
    path.push_back(s[index]);
    backtrack(index + 1, s, path, result);
    path.pop_back();

    // 2️⃣ Exclude current character
    backtrack(index + 1, s, path, result);
}

vector<string> solve(string text)
{
    sort(text.begin(), text.end()); // sort to group duplicates for lexicographical output

    set<string> result;
    string path = "";

    backtrack(0, text, path, result);

    // convert to vector (sorted automatically because set)
    return vector<string>(result.begin(), result.end());
}

int main()
{
    vector<string> ans = solve("abca");
    for (auto &x : ans)
        cout << "\"" << x << "\"" << endl;
}
