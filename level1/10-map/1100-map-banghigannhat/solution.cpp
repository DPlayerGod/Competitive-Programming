#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int q; cin >> q;
    map<int, int> rec;                           // thời điểm -> giá trị
    while (q--) {
        string cmd; int t; cin >> cmd >> t;
        if (cmd == "add") { int v; cin >> v; rec[t] = v; }
        else {
            auto it = rec.upper_bound(t);        // khóa đầu tiên > t
            if (it == rec.begin()) cout << -1 << '\n';   // không có khóa nào <= t
            else cout << prev(it)->second << '\n';       // lùi một bước: khóa lớn nhất <= t
        }
    }
}
