#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
long long d[N], p[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q, Q; cin >> n >> q >> Q;
    while (q--) {
        int l, r; long long x; cin >> l >> r >> x;
        d[l] += x; d[r + 1] -= x;
    }
    long long cur = 0;
    for (int i = 1; i <= n; i++) { cur += d[i]; p[i] = p[i - 1] + cur; }
    while (Q--) {
        int u, v; cin >> u >> v; cout << p[v] - p[u - 1] << '\n';
    }
}
