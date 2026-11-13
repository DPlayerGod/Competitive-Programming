#include <bits/stdc++.h>
using namespace std;

// The array is constant iff every difference a_i - a_{i-1} (i >= 2) is 0.
// An operation at position i >= 2 changes exactly one difference by 1, and at
// i = 1 it changes none, so the answer is the sum of |a_i - a_{i-1}|.
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    long long ans = 0;
    for (int i = 2; i <= n; i++) ans += llabs(a[i] - a[i - 1]);
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
