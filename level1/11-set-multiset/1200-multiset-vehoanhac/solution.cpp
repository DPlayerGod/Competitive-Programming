#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    multiset<int> tickets;
    for (int i = 0; i < n; i++) { int h; cin >> h; tickets.insert(h); }
    while (m--) {
        int t; cin >> t;
        auto it = tickets.upper_bound(t);        // vé đầu tiên đắt hơn t
        if (it == tickets.begin()) cout << -1 << '\n';
        else {
            it--;                                // vé đắt nhất <= t
            cout << *it << '\n';
            tickets.erase(it);
        }
    }
}
