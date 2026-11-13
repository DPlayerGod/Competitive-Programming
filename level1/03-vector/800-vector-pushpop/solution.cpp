#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int q; cin >> q;
    vector<int> v;
    while (q--) {
        string cmd; cin >> cmd;
        if (cmd == "push") { int x; cin >> x; v.push_back(x); }
        else if (cmd == "pop") v.pop_back();
        else if (cmd == "back") cout << v.back() << '\n';
        else if (cmd == "size") cout << v.size() << '\n';
        else {                                   // print
            if (v.empty()) cout << "EMPTY";
            for (int x : v) cout << x << ' ';
            cout << '\n';
        }
    }
}
