#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vector<vector<int>> g(k);                    // g[r] = các số chia k dư r
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        g[x % k].push_back(x);
    }
    for (int r = 0; r < k; r++) {
        cout << g[r].size();
        for (int x : g[r]) cout << ' ' << x;
        cout << '\n';
    }
}
