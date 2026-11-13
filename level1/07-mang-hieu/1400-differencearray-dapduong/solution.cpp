#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    long long prev = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        long long h; cin >> h;
        ans += max(0LL, h - prev); prev = h;
    }
    cout << ans << '\n';
}
