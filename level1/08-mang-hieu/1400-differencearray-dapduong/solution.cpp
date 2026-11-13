#include <bits/stdc++.h>
using namespace std;

// With h_0 = 0, every step up h_i > h_{i-1} must start h_i - h_{i-1} new
// working days at segment i; a step down only ends days. The answer is the sum
// of all steps up, and it is reachable by always extending running days.
void solve() {
    int n;
    cin >> n;
    long long ans = 0;
    int prev = 0;
    for (int i = 1; i <= n; i++) {
        int h;
        cin >> h;
        if (h > prev) ans += h - prev;
        prev = h;
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
