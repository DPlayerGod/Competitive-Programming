#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> L[30];  // distinct letters of string i
int have[26];       // chosen strings containing letter c
int avail[26];      // chosen + undecided strings containing letter c
int covered = 0;    // letters already present
int dead = 0;       // letters that can no longer be obtained
long long pw[30], ans = 0;

void go(int i) {
    if (dead > 0) return;                         // some letter is lost for good
    if (covered == 26) {                          // the remaining strings are free
        ans += pw[n - i];
        return;
    }
    if (i == n) return;

    for (int c : L[i]) if (have[c]++ == 0) covered++;    // take string i
    go(i + 1);
    for (int c : L[i]) if (--have[c] == 0) covered--;

    for (int c : L[i]) if (--avail[c] == 0) dead++;      // skip string i
    go(i + 1);
    for (int c : L[i]) if (avail[c]++ == 0) dead--;
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        bool seen[26] = {false};
        for (char ch : s)
            if (!seen[ch - 'a']) {
                seen[ch - 'a'] = true;
                L[i].push_back(ch - 'a');
            }
        for (int c : L[i]) avail[c]++;
    }
    // Strings with rare letters first: the branch that skips them dies at once.
    auto rarity = [&](const vector<int>& v) {
        int r = INT_MAX;
        for (int c : v) r = min(r, avail[c]);
        return r;
    };
    sort(L, L + n, [&](const vector<int>& x, const vector<int>& y) { return rarity(x) < rarity(y); });
    for (int c = 0; c < 26; c++) if (avail[c] == 0) dead++;
    pw[0] = 1;
    for (int i = 1; i <= n; i++) pw[i] = pw[i - 1] * 2;
    go(0);
    cout << ans << "\n";
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
