#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) { int x; cin >> x; s.insert(x); }
    cout << s.size() << '\n';
    for (int x : s) cout << x << ' ';                            // tăng dần
    cout << '\n';
    for (auto it = s.rbegin(); it != s.rend(); it++) cout << *it << ' ';   // giảm dần
    cout << '\n';
}
