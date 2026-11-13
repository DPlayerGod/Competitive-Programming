#include <bits/stdc++.h>
using namespace std;
long long p[2005][2005];
int z;
long long get(int x, int y, int u, int v) {
    x = max(x,1); y = max(y,1); u = min(u,z); v = min(v,z);
    if (x > u || y > v) return 0;
    return p[u][v]-p[x-1][v]-p[u][y-1]+p[x-1][y-1];
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k; z = 2*n-1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            long long x; cin >> x; p[i+j-1][i-j+n] = x;
        }
    for (int i = 1; i <= z; i++)
        for (int j = 1; j <= z; j++)
            p[i][j] += p[i-1][j]+p[i][j-1]-p[i-1][j-1];
    long long ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            int u = i+j-1, v = i-j+n;
            ans = max(ans, get(u-k,v-k,u+k,v+k));
        }
    cout << ans << '\n';
}
