#include <bits/stdc++.h>
using namespace std;

// Difference array of shifts: +1 for d = 1, -1 for d = 0. The total shift at
// position i is the prefix sum; apply it once modulo 26 (it can be negative).
void solve() {
    string s;
    int q;
    cin >> s >> q;
    int n = s.size();
    vector<int> d(n + 2, 0);
    while (q--) {
        int l, r, t;
        cin >> l >> r >> t;
        int v = t == 1 ? 1 : -1;
        d[l] += v;
        d[r + 1] -= v;
    }
    int sh = 0;
    for (int i = 1; i <= n; i++) {
        sh += d[i];
        int c = s[i - 1] - 'a';
        c = ((c + sh) % 26 + 26) % 26;
        s[i - 1] = char('a' + c);
    }
    cout << s << "\n";
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
