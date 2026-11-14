#include <bits/stdc++.h>
using namespace std;

int n, m, dx[4] = {-1,1,0,0}, dy[4] = {0,0,-1,1};
char g[10][10];
bool used[10][10];
long long ans;
void go(int r, int c) {
    if (r == n && c == m) { ans++; return; }
    used[r][c] = true;
    for (int d = 0; d < 4; d++) {
        int x = r + dx[d], y = c + dy[d];
        if (x < 1 || x > n || y < 1 || y > m) continue;
        if (g[x][y] == '#' || used[x][y]) continue;
        go(x, y);
    }
    used[r][c] = false;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> m;
    for (int r = 1; r <= n; r++)
        for (int c = 1; c <= m; c++) cin >> g[r][c];
    go(1, 1); cout << ans << '\n';
}
