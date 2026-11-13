#include <bits/stdc++.h>
using namespace std;

// Layer 1: a difference array over the operations counts how many times each
// operation runs. Layer 2: operation i adds d_i * cnt_i on [l_i, r_i].
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<int> L(m + 1), R(m + 1);
    vector<long long> d(m + 1);
    for (int i = 1; i <= m; i++) cin >> L[i] >> R[i] >> d[i];

    vector<long long> cntD(m + 2, 0);
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        cntD[x]++;
        cntD[y + 1]--;
    }

    vector<long long> D(n + 2, 0);
    long long cnt = 0;
    for (int i = 1; i <= m; i++) {
        cnt += cntD[i];
        D[L[i]] += d[i] * cnt;
        D[R[i] + 1] -= d[i] * cnt;
    }

    long long cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += D[i];
        cout << a[i] + cur << " \n"[i == n];
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
