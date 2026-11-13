#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    set<pair<int,int>> s;                     // (độ ưu tiên P, mã khách K): tự sắp theo P
    int t;
    while (cin >> t && t != 0) {
        if (t == 1) { int k, p; cin >> k >> p; s.insert({p, k}); }
        else if (s.empty()) cout << 0 << '\n';
        else if (t == 2) {                    // ưu tiên CAO nhất: phần tử cuối
            cout << s.rbegin()->second << '\n';
            s.erase(prev(s.end()));
        } else {                              // ưu tiên THẤP nhất: phần tử đầu
            cout << s.begin()->second << '\n';
            s.erase(s.begin());
        }
    }
}
