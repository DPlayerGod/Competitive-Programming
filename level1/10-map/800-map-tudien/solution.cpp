#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int q; cin >> q;
    map<string, int> m;
    while (q--) {
        string cmd; cin >> cmd;
        if (cmd == "set") { string k; int v; cin >> k >> v; m[k] = v; }
        else if (cmd == "get") {
            string k; cin >> k;
            auto it = m.find(k);                 // KHÔNG dùng m[k]: sẽ tạo khóa k
            cout << (it == m.end() ? -1 : it->second) << '\n';
        }
        else if (cmd == "del") { string k; cin >> k; m.erase(k); }   // không có thì bỏ qua
        else cout << m.size() << '\n';
    }
}
