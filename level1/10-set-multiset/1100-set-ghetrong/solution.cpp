#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    set<int> freeSeat;
    for (int i = 1; i <= n; i++) freeSeat.insert(i);
    while (q--) {
        int p; cin >> p;
        auto it = freeSeat.lower_bound(p);       // ghế trống đầu tiên >= p
        if (it == freeSeat.end()) cout << -1 << '\n';
        else { cout << *it << '\n'; freeSeat.erase(it); }   // xóa bằng iterator: O(log n)
    }
}
