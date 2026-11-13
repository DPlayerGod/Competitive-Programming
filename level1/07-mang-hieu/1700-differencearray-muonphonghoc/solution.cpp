#include <bits/stdc++.h>
using namespace std;
const int N = 1000005;
int n, m, need[N], L[N], R[N];
long long c[N], d[N];
bool ok(int k) {
    fill(d + 1, d + n + 2, 0);
    for (int j = 1; j <= k; j++) { d[L[j]] += need[j]; d[R[j] + 1] -= need[j]; }
    long long cur = 0;
    for (int i = 1; i <= n; i++) { cur += d[i]; if (cur > c[i]) return false; }
    return true;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> c[i];
    for (int j = 1; j <= m; j++) cin >> need[j] >> L[j] >> R[j];
    if (ok(m)) { cout << 0 << '\n'; return 0; }
    int lo = 1, hi = m;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (ok(mid)) lo = mid + 1; else hi = mid;
    }
    cout << lo << '\n';
}
