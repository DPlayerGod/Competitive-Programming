#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
    if (a.second != b.second) return a.second > b.second;   // y giảm dần
    return a.first < b.first;                                // cùng y: x tăng dần
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int,int>> p(n);
    for (auto &q : p) cin >> q.first >> q.second;
    sort(p.begin(), p.end(), cmp);
    for (auto &q : p) cout << q.first << ' ' << q.second << '\n';
}
