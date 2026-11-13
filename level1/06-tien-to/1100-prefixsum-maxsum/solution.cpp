#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    long long p = 0, mn = 0, ans = LLONG_MIN;
    for (int r = 1; r <= n; r++) {
        long long x; cin >> x; p += x;
        ans = max(ans, p - mn);
        mn = min(mn, p);
    }
    cout << ans << '\n';
}
