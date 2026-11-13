#include <bits/stdc++.h>
using namespace std;

// Flipping a segment twice does nothing and the order of flips does not
// matter. Bulb i can only be fixed by the flip starting at i once the bulbs
// before it are fixed, so the greedy is forced. cnt = flips covering bulb i;
// a difference array ends them after k bulbs.
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1), d(n + 2, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    int cnt = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        cnt += d[i];
        if ((a[i] + cnt) % 2 == 0) {
            if (i + k - 1 > n) {
                cout << -1 << "\n";
                return;
            }
            ans++;
            cnt++;
            d[i + k]--;
        }
    }
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
