#include <bits/stdc++.h>
using namespace std;

long long a[505][505], b[505];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    bool flip = n > m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            long long x; cin >> x;
            if (flip) a[j][i] = x; else a[i][j] = x;
        }
    if (flip) swap(n, m);
    long long ans = LLONG_MIN;
    for (int top = 1; top <= n; top++) {
        fill(b+1, b+m+1, 0);
        for (int bot = top; bot <= n; bot++) {
            long long cur = 0;
            for (int j = 1; j <= m; j++) {
                b[j] += a[bot][j];
                cur = max(b[j], cur+b[j]);
                ans = max(ans, cur);
            }
        }
    }
    cout << ans << '\n';
}
