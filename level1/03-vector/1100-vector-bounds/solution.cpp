#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(a.begin(), a.end());                    // lower_bound / upper_bound cần dãy đã sắp
    while (q--) {
        int t; cin >> t;
        if (t == 1) {                            // số phần tử < x
            int x; cin >> x;
            cout << lower_bound(a.begin(), a.end(), x) - a.begin() << '\n';
        } else if (t == 2) {                     // số phần tử <= x
            int x; cin >> x;
            cout << upper_bound(a.begin(), a.end(), x) - a.begin() << '\n';
        } else if (t == 3) {                     // số phần tử trong [l, r]
            int l, r; cin >> l >> r;
            cout << upper_bound(a.begin(), a.end(), r) - lower_bound(a.begin(), a.end(), l) << '\n';
        } else {                                 // số nhỏ nhất >= x
            int x; cin >> x;
            auto it = lower_bound(a.begin(), a.end(), x);
            if (it == a.end()) cout << -1 << '\n';
            else cout << *it << '\n';
        }
    }
}
