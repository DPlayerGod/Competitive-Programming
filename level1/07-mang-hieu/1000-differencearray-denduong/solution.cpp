#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
int d[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m, k; cin >> n >> m >> k;
    while (m--) {
        int l, r; cin >> l >> r; d[l]++; d[r + 1]--;
    }
    int cur = 0, cnt = 0, mx = 0;
    for (int i = 1; i <= n; i++) {
        cur += d[i]; cnt += (cur >= k); mx = max(mx, cur);
    }
    cout << cnt << ' ' << mx << '\n';
}
