#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int s, n;
    if (!(cin >> s >> n)) return 0;
    vector<pair<int,int>> d(n);
    for (auto &p : d) cin >> p.first >> p.second;
    sort(d.begin(), d.end());
    for (auto &p : d) {
        if (s <= p.first) { cout << "NO\n"; return 0; }
        s += p.second;
    }
    cout << "YES\n";
}
