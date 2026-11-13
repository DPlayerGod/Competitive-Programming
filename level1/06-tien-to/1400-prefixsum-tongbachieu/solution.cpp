#include <bits/stdc++.h>
using namespace std;

// 3D prefix sums P[i][j][k] (flattened), each query by 8-term inclusion-exclusion.
void solve() {
    int m, n, r;
    cin >> m >> n >> r;
    int N = n + 1, R = r + 1;
    vector<long long> P((size_t)(m + 1) * N * R, 0);
    auto id = [&](int i, int j, int k) { return ((size_t)i * N + j) * R + k; };
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= r; k++) {
                long long a;
                cin >> a;
                P[id(i, j, k)] = a
                    + P[id(i - 1, j, k)] + P[id(i, j - 1, k)] + P[id(i, j, k - 1)]
                    - P[id(i - 1, j - 1, k)] - P[id(i - 1, j, k - 1)] - P[id(i, j - 1, k - 1)]
                    + P[id(i - 1, j - 1, k - 1)];
            }
    int Q;
    cin >> Q;
    while (Q--) {
        int i1, j1, k1, i2, j2, k2;
        cin >> i1 >> j1 >> k1 >> i2 >> j2 >> k2;
        i1--, j1--, k1--;
        long long s = P[id(i2, j2, k2)]
            - P[id(i1, j2, k2)] - P[id(i2, j1, k2)] - P[id(i2, j2, k1)]
            + P[id(i1, j1, k2)] + P[id(i1, j2, k1)] + P[id(i2, j1, k1)]
            - P[id(i1, j1, k1)];
        cout << s << "\n";
    }
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
