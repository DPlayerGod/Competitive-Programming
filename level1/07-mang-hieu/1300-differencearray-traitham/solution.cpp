#include <bits/stdc++.h>
using namespace std;

int D[1002][1002];

// 2D difference array: each carpet updates four corners, then a 2D prefix sum
// (inclusion-exclusion) gives the number of carpets over every cell.
void solve() {
    int n, m, q, k;
    cin >> n >> m >> q >> k;
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        D[x1][y1]++;
        D[x1][y2 + 1]--;
        D[x2 + 1][y1]--;
        D[x2 + 1][y2 + 1]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            D[i][j] += D[i - 1][j] + D[i][j - 1] - D[i - 1][j - 1];
            if (D[i][j] >= k) ans++;
        }
    cout << ans << "\n";
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
