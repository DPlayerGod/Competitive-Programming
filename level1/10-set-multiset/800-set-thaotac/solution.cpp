#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int q; cin >> q;
    set<int> s;
    while (q--) {
        string cmd; cin >> cmd;
        if (cmd == "add") { int x; cin >> x; s.insert(x); }      // đã có thì không thêm
        else if (cmd == "del") { int x; cin >> x; s.erase(x); }  // không có thì bỏ qua
        else if (cmd == "has") { int x; cin >> x; cout << (s.count(x) ? "YES" : "NO") << '\n'; }
        else if (cmd == "size") cout << s.size() << '\n';
        else if (s.empty()) cout << "EMPTY\n";
        else if (cmd == "min") cout << *s.begin() << '\n';
        else cout << *s.rbegin() << '\n';                        // max
    }
}
