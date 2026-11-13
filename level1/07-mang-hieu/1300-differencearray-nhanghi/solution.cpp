#include <bits/stdc++.h>
using namespace std;
const int N = 400005;
pair<long long, int> ev[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        long long l, r; cin >> l >> r;
        ev[2 * i - 1] = {l, 1}; ev[2 * i] = {r + 1, -1};
    }
    sort(ev + 1, ev + 2 * n + 1);
    int cur = 0, mx = 0;
    long long covered = 0, prev = ev[1].first;
    for (int i = 1; i <= 2 * n; ) {
        long long x = ev[i].first;
        if (cur > 0) covered += x - prev;
        while (i <= 2 * n && ev[i].first == x) cur += ev[i++].second;
        mx = max(mx, cur); prev = x;
    }
    cout << mx << ' ' << covered << '\n';
}
