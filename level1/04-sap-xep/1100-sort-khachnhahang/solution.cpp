#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<pair<int,int>> ev;
    ev.reserve(2 * n);
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        ev.push_back({a, +1});
        ev.push_back({b, -1});
    }
    sort(ev.begin(), ev.end());
    int cur = 0, best = 0;
    for (auto &e : ev) {
        cur += e.second;
        best = max(best, cur);
    }
    cout << best << '\n';
}
