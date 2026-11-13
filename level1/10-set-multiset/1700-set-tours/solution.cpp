#include <bits/stdc++.h>
using namespace std;
const int N = 400005;
array<long long, 3> tour[N];
pair<int,int> ans[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    set<pair<long long,int>> g;
    for (int i = 1; i <= n; i++) {
        long long s; cin >> s; g.insert({s, i});
    }
    for (int j = 1; j <= m; j++) {
        cin >> tour[j][1] >> tour[j][0]; tour[j][2] = j;
    }
    sort(tour + 1, tour + m + 1);
    int cnt = 0;
    for (int j = 1; j <= m; j++) {
        auto it = g.lower_bound({tour[j][1], 0});
        if (it != g.end() && it->first <= tour[j][0]) {
            ans[++cnt] = {it->second, (int)tour[j][2]}; g.erase(it);
        }
    }
    cout << cnt << '\n';
    for (int i = 1; i <= cnt; i++)
        cout << ans[i].first << ' ' << ans[i].second << '\n';
}
