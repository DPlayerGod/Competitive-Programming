#include <bits/stdc++.h>
using namespace std;

// An arc with l <= r is an ordinary range. An arc with l > r passes pot n and
// continues from pot 1, so it is the two ranges [l, n] and [1, r].
void solve() {
    int n, q;
    cin >> n >> q;
    vector<long long> d(n + 2, 0);
    auto add = [&](int l, int r, long long x) {
        d[l] += x;
        d[r + 1] -= x;
    };
    while (q--) {
        int l, r;
        long long x;
        cin >> l >> r >> x;
        if (l <= r) {
            add(l, r, x);
        } else {
            add(l, n, x);
            add(1, r, x);
        }
    }
    long long cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += d[i];
        cout << cur << " \n"[i == n];
    }
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
