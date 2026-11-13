#include <bits/stdc++.h>
using namespace std;

// Difference array: adding x on [l, r] is d[l] += x, d[r + 1] -= x.
// The final array is a[i] + (d[1] + ... + d[i]).
void solve() {
    int n, q;
    cin >> n >> q;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<long long> d(n + 2, 0);
    while (q--) {
        int l, r;
        long long x;
        cin >> l >> r >> x;
        d[l] += x;
        d[r + 1] -= x;
    }
    long long add = 0;
    for (int i = 1; i <= n; i++) {
        add += d[i];
        cout << a[i] + add << " \n"[i == n];
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
