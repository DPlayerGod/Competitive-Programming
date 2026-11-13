#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int q; cin >> q;
    set<long long> s;
    while (q--) {
        string cmd; long long x; cin >> cmd >> x;
        if (cmd == "add") s.insert(x);
        else if (cmd == "del") s.erase(x);
        else {
            if (s.empty()) { cout << -1 << '\n'; continue; }
            auto it = s.lower_bound(x);          // ứng viên 1: nhỏ nhất >= x
            long long best = LLONG_MAX, val = 0;
            if (it != s.end()) { best = *it - x; val = *it; }
            if (it != s.begin()) {               // ứng viên 2: lớn nhất < x
                long long y = *prev(it);
                if (x - y <= best) { best = x - y; val = y; }   // bằng nhau: lấy số nhỏ hơn
            }
            cout << val << '\n';
        }
    }
}
