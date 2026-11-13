#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
long long d[N];
void add(int l, int r, long long x) { d[l] += x; d[r + 1] -= x; }
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    while (q--) {
        int l, r; long long x; cin >> l >> r >> x;
        if (l <= r) add(l, r, x);
        else { add(l, n, x); add(1, r, x); }
    }
    long long cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += d[i]; cout << cur << (i == n ? '\n' : ' ');
    }
}
