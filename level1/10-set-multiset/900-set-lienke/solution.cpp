#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    set<int> s;
    for (int i = 0; i < n; i++) { int x; cin >> x; s.insert(x); }
    while (q--) {
        string cmd; int x; cin >> cmd >> x;
        if (cmd == "next") {                     // nhỏ nhất >= x
            auto it = s.lower_bound(x);
            cout << (it == s.end() ? -1 : *it) << '\n';
        } else {                                 // lớn nhất <= x
            auto it = s.upper_bound(x);
            cout << (it == s.begin() ? -1 : *prev(it)) << '\n';
        }
    }
}
