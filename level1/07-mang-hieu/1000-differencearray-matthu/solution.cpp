#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
int d[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; int q; cin >> s >> q; int n = s.size();
    while (q--) {
        int l, r, t; cin >> l >> r >> t; int x = (t == 1 ? 1 : -1);
        d[l] += x; d[r + 1] -= x;
    }
    int cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += d[i]; int x = s[i - 1] - 'a';
        s[i - 1] = char('a' + ((x + cur) % 26 + 26) % 26);
    }
    cout << s << '\n';
}
