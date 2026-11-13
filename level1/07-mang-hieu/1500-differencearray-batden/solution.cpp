#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
int a[N], d[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int cur = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        cur += d[i];
        if ((a[i] + cur) % 2 == 0) {
            if (i + k - 1 > n) { cout << -1 << '\n'; return 0; }
            ans++; cur++; d[i + k]--;
        }
    }
    cout << ans << '\n';
}
