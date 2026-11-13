#include <bits/stdc++.h>
using namespace std;

int n;
long long c[12][12], best = LLONG_MAX, minEdge = LLONG_MAX;
bool vis[12];

// cnt cities visited, standing at u with cost so far. n - cnt + 1 edges remain
// (including the way back), each costs at least minEdge: cut if that cannot beat best.
void go(int u, int cnt, long long cost) {
    if (cost + (n - cnt + 1) * minEdge >= best) return;
    if (cnt == n) {
        best = min(best, cost + c[u][0]);
        return;
    }
    for (int v = 0; v < n; v++)
        if (!vis[v]) {
            vis[v] = true;
            go(v, cnt + 1, cost + c[u][v]);
            vis[v] = false;
        }
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> c[i][j];
            if (i != j) minEdge = min(minEdge, c[i][j]);
        }
    vis[0] = true;
    go(0, 1, 0);
    cout << best << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases = 1;
    while (test_cases--) {
        solve();
    }
    return 0;
}
