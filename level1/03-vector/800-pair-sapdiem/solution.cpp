#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int,int>> p(n);
    for (auto &q : p) cin >> q.first >> q.second;
    sort(p.begin(), p.end());   // so first trước, bằng thì so second
    for (auto &q : p) cout << q.first << ' ' << q.second << '\n';
}
