#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<pair<int,int>> m(n);
    for (auto &p : m) cin >> p.second >> p.first;
    sort(m.begin(), m.end());
    int cnt = 0, lastEnd = 0;
    for (auto &p : m) {
        if (p.second >= lastEnd) {
            cnt++;
            lastEnd = p.first;
        }
    }
    cout << cnt << '\n';
}
