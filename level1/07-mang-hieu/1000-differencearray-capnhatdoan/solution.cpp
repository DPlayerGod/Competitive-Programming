#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
long long a[N], d[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (q--) {
        int l, r; long long x; cin >> l >> r >> x;
        d[l] += x; d[r + 1] -= x;
    }
    long long cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += d[i]; cout << a[i] + cur << (i == n ? '\n' : ' ');
    }
}
