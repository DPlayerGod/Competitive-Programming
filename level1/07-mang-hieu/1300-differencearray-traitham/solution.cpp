#include <bits/stdc++.h>
using namespace std;
int d[1005][1005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m, q, k; cin >> n >> m >> q >> k;
    while (q--) {
        int x, y, u, v; cin >> x >> y >> u >> v;
        d[x][y]++; d[x][v + 1]--; d[u + 1][y]--; d[u + 1][v + 1]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            d[i][j] += d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1];
            ans += (d[i][j] >= k);
        }
    cout << ans << '\n';
}
