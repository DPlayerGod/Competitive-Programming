#include <bits/stdc++.h>
using namespace std;

int n, m, x, a[12], need[12], req[12][12];
long long ans;
void go(int i) {
    if (i == n + 1) { ans++; return; }
    if (need[i] == 1) { go(i + 1); return; }
    for (int v = need[i]; v <= x; v += need[i]) {
        bool ok = true;
        for (int j = 1; j < i; j++)
            if (req[j][i] && gcd(a[j], v) != req[j][i]) ok = false;
        if (ok) { a[i] = v; go(i + 1); }
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> m >> x;
    fill(need + 1, need + n + 1, 1);
    bool ok = true;
    while (m--) {
        int i, j, g; cin >> i >> j >> g;
        if (i > j) swap(i, j);
        if (req[i][j] && req[i][j] != g) ok = false;
        req[i][j] = g;
        need[i] = lcm(need[i], g); need[j] = lcm(need[j], g);
    }
    long long freeWays = 1;
    for (int i = 1; i <= n; i++) if (need[i] == 1) freeWays *= x;
    if (ok) go(1);
    cout << ans * freeWays << '\n';
}
