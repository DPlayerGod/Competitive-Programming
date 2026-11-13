#include <bits/stdc++.h>
using namespace std;

// Adding 1, 2, ..., len on [l, r] (len = r - l + 1) has first difference 1 on
// [l, r] and -len at r + 1. Taking the difference again gives three point
// updates: D2[l] += 1, D2[r + 1] -= len + 1, D2[r + 2] += len.
// Two prefix sums recover the array.
void solve() {
    int n, q;
    cin >> n >> q;
    vector<long long> d2(n + 3, 0);
    while (q--) {
        int l, r;
        cin >> l >> r;
        long long len = r - l + 1;
        d2[l] += 1;
        d2[r + 1] -= len + 1;
        d2[r + 2] += len;
    }
    long long d1 = 0, cur = 0;
    for (int i = 1; i <= n; i++) {
        d1 += d2[i];
        cur += d1;
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
