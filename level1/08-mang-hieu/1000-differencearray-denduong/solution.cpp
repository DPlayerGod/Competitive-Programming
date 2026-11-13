#include <bits/stdc++.h>
using namespace std;

// Each lamp adds 1 on [l, r]: D[l]++, D[r + 1]--. Prefix sums give the coverage.
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> d(n + 2, 0);
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    int cur = 0, cnt = 0, mx = 0;
    for (int i = 1; i <= n; i++) {
        cur += d[i];
        if (cur >= k) cnt++;
        mx = max(mx, cur);
    }
    cout << cnt << " " << mx << "\n";
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
