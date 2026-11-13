#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    multiset<int> w;                             // các phần tử trong cửa sổ
    for (int i = 0; i < n; i++) {
        w.insert(a[i]);
        if (i >= k) w.erase(w.find(a[i - k]));   // bỏ phần tử ra khỏi cửa sổ (một bản)
        if (i >= k - 1) cout << *w.rbegin() << ' ' << *w.begin() << '\n';
    }
}
