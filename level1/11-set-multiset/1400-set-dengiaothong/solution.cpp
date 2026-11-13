#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int x, n; cin >> x >> n;
    set<int> pos = {0, x};                       // vị trí đèn, kèm hai đầu đường
    multiset<int> len = {x};                     // độ dài các đoạn không có đèn
    while (n--) {
        int p; cin >> p;
        auto r = pos.upper_bound(p);             // đèn gần nhất bên phải
        auto l = prev(r);                        // đèn gần nhất bên trái
        len.erase(len.find(*r - *l));            // đoạn [l, r] bị chia đôi: xóa MỘT bản
        len.insert(p - *l);
        len.insert(*r - p);
        pos.insert(p);
        cout << *len.rbegin() << ' ';
    }
    cout << '\n';
}
