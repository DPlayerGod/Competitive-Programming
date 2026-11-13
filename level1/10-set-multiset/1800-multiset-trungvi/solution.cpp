#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
int a[N];
multiset<int> lo, hi;
void balance() {
    while (lo.size() > hi.size() + 1) {
        hi.insert(*lo.rbegin()); lo.erase(prev(lo.end()));
    }
    while (lo.size() < hi.size()) {
        lo.insert(*hi.begin()); hi.erase(hi.begin());
    }
}
void add(int x) {
    if (lo.empty() || x <= *lo.rbegin()) lo.insert(x);
    else hi.insert(x);
    balance();
}
void removeOne(int x) {
    auto it = lo.find(x);
    if (it != lo.end()) lo.erase(it);
    else hi.erase(hi.find(x));
    balance();
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        add(a[i]);
        if (i > k) removeOne(a[i-k]);
        if (i >= k) cout << *lo.rbegin() << ' ';
    }
    cout << '\n';
}
