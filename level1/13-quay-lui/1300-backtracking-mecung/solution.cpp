#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> g;
bool vis[10][10];
long long cnt = 0;
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};

// The real state is the current cell plus vis[][]: mark on entry, unmark on exit.
void dfs(int x, int y) {
    if (x == n - 1 && y == m - 1) {
        cnt++;
        return;
    }
    vis[x][y] = true;
    for (int d = 0; d < 4; d++) {
        int u = x + dx[d], v = y + dy[d];
        if (u < 0 || u >= n || v < 0 || v >= m) continue;
        if (g[u][v] == '#' || vis[u][v]) continue;
        dfs(u, v);
    }
    vis[x][y] = false;
}

void solve() {
    cin >> n >> m;
    g.resize(n);
    for (auto& row : g) cin >> row;
    dfs(0, 0);
    cout << cnt << "\n";
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
