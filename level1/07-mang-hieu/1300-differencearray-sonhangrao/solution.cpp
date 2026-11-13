#include <bits/stdc++.h>
using namespace std;

// cnt[j] = number of painters on section j (difference array). Dropping
// painter i loses exactly the sections of [l_i, r_i] with cnt == 1; a prefix
// count of those sections answers each painter in O(1).
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> L(m), R(m), d(n + 2, 0);
    for (int i = 0; i < m; i++) {
        cin >> L[i] >> R[i];
        d[L[i]]++;
        d[R[i] + 1]--;
    }
    vector<int> one(n + 1, 0);
    int cur = 0, total = 0;
    for (int j = 1; j <= n; j++) {
        cur += d[j];
        if (cur > 0) total++;
        one[j] = one[j - 1] + (cur == 1 ? 1 : 0);
    }
    int best_loss = INT_MAX;
    for (int i = 0; i < m; i++) best_loss = min(best_loss, one[R[i]] - one[L[i] - 1]);
    cout << total - best_loss << "\n";
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
