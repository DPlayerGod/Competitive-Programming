#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int q; cin >> q;
    multiset<int> ms;
    map<int, int> freq;
    while (q--) {
        string cmd; cin >> cmd;
        if (cmd == "add") { int x; cin >> x; ms.insert(x); freq[x]++; }
        else if (cmd == "del") {
            int x; cin >> x;
            auto it = ms.find(x);
            if (it != ms.end()) {
                ms.erase(it);
                if (--freq[x] == 0) freq.erase(x);
            }
        }
        else if (cmd == "cnt") { int x; cin >> x; auto it = freq.find(x); cout << (it == freq.end() ? 0 : it->second) << '\n'; }
        else if (cmd == "size") cout << ms.size() << '\n';
        else if (ms.empty()) cout << "EMPTY\n";
        else if (cmd == "min") cout << *ms.begin() << '\n';
        else cout << *ms.rbegin() << '\n';
    }
}
