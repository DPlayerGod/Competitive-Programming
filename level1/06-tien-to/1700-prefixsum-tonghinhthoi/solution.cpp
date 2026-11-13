#include <bits/stdc++.h>
using namespace std;

// Rotate 45 degrees: cell (i, j) -> (u, v) = (i + j, i - j + n).
// The diamond |x - i| + |y - j| <= k becomes the square [u - k, u + k] x [v - k, v + k].
void solve() {
    int n, k;
    cin >> n >> k;
    int m = 2 * n;
    vector<vector<long long>> s(m + 1, vector<long long>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            long long p;
            cin >> p;
            s[i + j][i - j + n] = p;
        }
    }
    for (int u = 1; u <= m; u++) {
        for (int v = 1; v <= m; v++) {
            s[u][v] += s[u - 1][v] + s[u][v - 1] - s[u - 1][v - 1];
        }
    }

    auto rect = [&](int u1, int v1, int u2, int v2) {
        u1 = max(u1, 1);
        v1 = max(v1, 1);
        u2 = min(u2, m);
        v2 = min(v2, m);
        return s[u2][v2] - s[u1 - 1][v2] - s[u2][v1 - 1] + s[u1 - 1][v1 - 1];
    };

    long long best = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int u = i + j, v = i - j + n;
            best = max(best, rect(u - k, v - k, u + k, v + k));
        }
    }
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
