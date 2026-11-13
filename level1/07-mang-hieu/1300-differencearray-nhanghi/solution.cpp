#include <bits/stdc++.h>
using namespace std;

// Days go up to 10^9, so keep only the events (l, +1) and (r + 1, -1), sort them
// and sweep. The number of guests is constant on [prev, x), so that whole block
// is added at once. On equal days -1 sorts before +1, so touching stays do not
// count as overlapping.
void solve() {
    int n;
    cin >> n;
    vector<pair<long long, int>> ev;
    for (int i = 0; i < n; i++) {
        long long l, r;
        cin >> l >> r;
        ev.push_back({l, +1});
        ev.push_back({r + 1, -1});
    }
    sort(ev.begin(), ev.end());
    int cur = 0, mx = 0;
    long long covered = 0, prev = 0;
    for (auto [x, v] : ev) {
        if (cur > 0) covered += x - prev;
        cur += v;
        mx = max(mx, cur);
        prev = x;
    }
    cout << mx << " " << covered << "\n";
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
