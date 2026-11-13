#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    map<string, int> cnt;
    for (int i = 0; i < n; i++) { string w; cin >> w; cnt[w]++; }
    for (auto &p : cnt) cout << p.first << ' ' << p.second << '\n';           // tăng dần
    cout << "---\n";
    for (auto it = cnt.rbegin(); it != cnt.rend(); it++)                      // giảm dần
        cout << it->first << ' ' << it->second << '\n';
}
