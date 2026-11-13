#include <bits/stdc++.h>
using namespace std;

int k;
multiset<int> lo, hi;   // lo: nửa nhỏ (giữ (k + 1) / 2 phần tử), hi: nửa lớn; trung vị = max(lo)

void balance() {
    // đảm bảo mọi phần tử của lo <= mọi phần tử của hi, và lo có đúng (k + 1) / 2 phần tử
    while ((int)lo.size() > (k + 1) / 2) { hi.insert(*lo.rbegin()); lo.erase(prev(lo.end())); }
    while ((int)lo.size() < (k + 1) / 2 && !hi.empty()) { lo.insert(*hi.begin()); hi.erase(hi.begin()); }
}

void add(int x) {
    if (!lo.empty() && x <= *lo.rbegin()) lo.insert(x); else hi.insert(x);
    balance();
}

void removeOne(int x) {
    auto it = lo.find(x);
    if (it != lo.end()) lo.erase(it); else hi.erase(hi.find(x));
    balance();
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    for (int i = 0; i < n; i++) {
        add(a[i]);
        if (i >= k) removeOne(a[i - k]);
        if (i >= k - 1) cout << *lo.rbegin() << ' ';
    }
    cout << '\n';
}
