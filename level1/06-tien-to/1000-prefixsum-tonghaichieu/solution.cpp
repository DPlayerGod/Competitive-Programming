#include <bits/stdc++.h>
using namespace std;

long long p[1005][1005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m, q; cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            long long x; cin >> x;
            p[i][j] = x+p[i-1][j]+p[i][j-1]-p[i-1][j-1];
        }
    while (q--) {
        int x, y, u, v; cin >> x >> y >> u >> v;
        cout << p[u][v]-p[x-1][v]-p[u][y-1]+p[x-1][y-1] << '\n';
    }
}
