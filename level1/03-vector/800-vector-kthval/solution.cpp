#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    while (q--) {
        int t; cin >> t;
        if (t == 1) { int x; cin >> x; a.push_back(x); }
        else if (t == 2) a.pop_back();
        else { int k; cin >> k; cout << a[k - 1] << '\n'; }   // chỉ số đề từ 1, vector từ 0
    }
}
