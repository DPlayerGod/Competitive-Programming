#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    map<int, vector<int>> pos;                   // mã -> các vị trí, tự tăng dần
    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        pos[a].push_back(i);
    }
    while (q--) {
        int l, r, x; cin >> l >> r >> x;
        auto it = pos.find(x);
        if (it == pos.end()) { cout << 0 << '\n'; continue; }
        vector<int> &v = it->second;             // tham chiếu, không chép vector
        cout << upper_bound(v.begin(), v.end(), r) - lower_bound(v.begin(), v.end(), l) << '\n';
    }
}
