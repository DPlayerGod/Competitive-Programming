#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int m, n, r; cin >> m >> n >> r;
    // The padded volume is at most 8*m*n*r.
    vector<long long> p(1LL*(m+1)*(n+1)*(r+1));
    auto id = [=](int i, int j, int k) {
        return (1LL*i*(n+1)+j)*(r+1)+k;
    };
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= r; k++) {
                long long x; cin >> x;
                p[id(i,j,k)] = x+p[id(i-1,j,k)]+p[id(i,j-1,k)]
                    +p[id(i,j,k-1)]-p[id(i-1,j-1,k)]
                    -p[id(i-1,j,k-1)]-p[id(i,j-1,k-1)]
                    +p[id(i-1,j-1,k-1)];
            }
    int q; cin >> q;
    while (q--) {
        int x, y, z, u, v, w; cin >> x >> y >> z >> u >> v >> w;
        x--; y--; z--;
        cout << p[id(u,v,w)]-p[id(x,v,w)]-p[id(u,y,w)]-p[id(u,v,z)]
             +p[id(x,y,w)]+p[id(x,v,z)]+p[id(u,y,z)]-p[id(x,y,z)] << '\n';
    }
}
