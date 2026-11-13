#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    vector<int> v(n);
    for (int &x : v) cin >> x;
    while (q--) {
        string cmd; int i; cin >> cmd >> i;      // i đánh số từ 1
        if (cmd == "insert") {
            int x; cin >> x;
            v.insert(v.begin() + (i - 1), x);
        }
        else if (cmd == "erase") v.erase(v.begin() + (i - 1));
        else cout << v[i - 1] << '\n';          // get
    }
    for (int x : v) cout << x << ' ';
    cout << '\n';
}
