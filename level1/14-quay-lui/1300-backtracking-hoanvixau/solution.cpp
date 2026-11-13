#include <bits/stdc++.h>
using namespace std;

int n, cnt[26];
string cur;
vector<string> res;

// Position i chooses a letter (not an index) that still has cnt[c] > 0:
// equal letters are one choice, so each distinct string is built once, already sorted.
void perm(int i) {
    if (i == n) {
        res.push_back(cur);
        return;
    }
    for (int c = 0; c < 26; c++)
        if (cnt[c] > 0) {
            cnt[c]--;
            cur.push_back('a' + c);
            perm(i + 1);
            cur.pop_back();
            cnt[c]++;
        }
}

void solve() {
    string s;
    cin >> s;
    n = s.size();
    for (char ch : s) cnt[ch - 'a']++;
    perm(0);
    cout << res.size() << "\n";
    for (auto& t : res) cout << t << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases = 1;
    while (test_cases--) {
        solve();
    }
    return 0;
}
