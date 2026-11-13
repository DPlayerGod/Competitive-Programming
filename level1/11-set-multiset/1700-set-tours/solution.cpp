#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    set<pair<long long,int>> g;               // (số người, chỉ số nhóm)
    for (int i = 1; i <= n; i++) { long long s; cin >> s; g.insert({s, i}); }
    vector<array<long long,3>> tour(m);       // (tối đa u, tối thiểu l, chỉ số)
    for (int j = 0; j < m; j++) { cin >> tour[j][1] >> tour[j][0]; tour[j][2] = j + 1; }
    sort(tour.begin(), tour.end());           // tour có giới hạn trên nhỏ xét trước
    vector<pair<int,int>> ans;
    for (auto &t : tour) {
        auto it = g.lower_bound({t[1], 0});   // nhóm nhỏ nhất có >= l người
        if (it != g.end() && it->first <= t[0]) {
            ans.push_back({it->second, (int)t[2]});
            g.erase(it);
        }
    }
    cout << ans.size() << '\n';
    for (auto &p : ans) cout << p.first << ' ' << p.second << '\n';
}
