#include <bits/stdc++.h>
using namespace std;

int n, m;
char a[20][20];
bool freeCell(int r, int c) {
    return r >= 1 && r <= n && c >= 1 && c <= m && a[r][c] == '.';
}
bool go() {
    int r = 0, c = 0;
    for (int i = 1; i <= n && !r; i++) for (int j = 1; j <= m; j++)
        if (a[i][j] == '.') { r = i; c = j; break; }
    if (!r) return true;
    for (int dc : {1, -1}) {
        if (!freeCell(r + 1, c) || !freeCell(r + 1, c + dc)) continue;
        a[r][c] = a[r + 1][c] = a[r + 1][c + dc] = '*';
        if (go()) return true;
        a[r][c] = a[r + 1][c] = a[r + 1][c + dc] = '.';
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> m;
    int empty = 0;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) {
        cin >> a[i][j]; empty += (a[i][j] == '.');
    }
    cout << (empty % 3 == 0 && go() ? "YES" : "NO") << '\n';
}
