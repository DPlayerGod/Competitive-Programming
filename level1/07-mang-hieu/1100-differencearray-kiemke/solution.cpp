#include <bits/stdc++.h>
using namespace std;

// All updates come before all questions. Difference array -> prefix sum gives
// the final array a, another prefix sum S gives range sums S[v] - S[u - 1].
void solve() {
    int n, q, Q;
    cin >> n >> q >> Q;
    vector<long long> D(n + 2, 0), S(n + 1, 0);
    while (q--) {
        int l, r;
        long long x;
        cin >> l >> r >> x;
        D[l] += x;
        D[r + 1] -= x;
    }
    long long cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += D[i];
        S[i] = S[i - 1] + cur;
    }
    while (Q--) {
        int u, v;
        cin >> u >> v;
        cout << S[v] - S[u - 1] << "\n";
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
