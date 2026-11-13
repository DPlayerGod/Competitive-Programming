#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<vector<int>> h(n + 1);          // h[x] = chiều cao các võ sĩ loài x, luôn tăng dần
    while (m--) {
        int t; cin >> t;
        if (t == 1) {
            int x, y; cin >> x >> y;
            auto pos = upper_bound(h[x].begin(), h[x].end(), y);   // vị trí giữ cho hàng vẫn tăng
            h[x].insert(pos, y);
        } else {
            int u; cin >> u;
            for (int v : h[u]) cout << v << ' ';
            cout << '\n';
        }
    }
}
