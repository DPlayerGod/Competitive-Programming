#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long k; cin >> n >> k;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    multiset<long long> w;
    int l = 0, best = 0;
    for (int r = 0; r < n; r++) {
        w.insert(a[r]);
        while (*w.rbegin() - *w.begin() > k)     // max - min quá k: co bên trái
            w.erase(w.find(a[l++]));
        best = max(best, r - l + 1);
    }
    cout << best << '\n';
}
