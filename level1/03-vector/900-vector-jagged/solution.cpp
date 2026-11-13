#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<vector<int>> row(n + 1);              // row[i] là một vector riêng, dài tùy ý
    for (int i = 1; i <= n; i++) {
        int k; cin >> k;
        row[i].resize(k);
        for (int &x : row[i]) cin >> x;
    }
    int q; cin >> q;
    while (q--) {
        int t, i; cin >> t >> i;
        if (t == 1) { int x; cin >> x; row[i].push_back(x); }      // thêm vào cuối hàng i
        else if (t == 2) { int j; cin >> j; cout << row[i][j - 1] << '\n'; }
        else cout << row[i].size() << '\n';
    }
}
