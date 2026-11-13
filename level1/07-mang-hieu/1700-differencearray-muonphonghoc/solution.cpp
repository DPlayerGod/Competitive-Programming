#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000005;
int n, m;
long long c[MAXN], D[MAXN];
int d[MAXN], s[MAXN], t[MAXN];

// Can the first k orders all be served? Difference array + one prefix pass.
bool ok(int k) {
    for (int i = 1; i <= n + 1; i++) D[i] = 0;
    for (int j = 1; j <= k; j++) {
        D[s[j]] += d[j];
        D[t[j] + 1] -= d[j];
    }
    long long cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += D[i];
        if (cur > c[i]) return false;
    }
    return true;
}

// If the first k orders fit, so do the first k - 1: binary search the smallest
// k for which ok(k) is false.
void solve() {
    if (scanf("%d %d", &n, &m) != 2) return;
    for (int i = 1; i <= n; i++) {
        if (scanf("%lld", &c[i]) != 1) return;
    }
    for (int j = 1; j <= m; j++) {
        if (scanf("%d %d %d", &d[j], &s[j], &t[j]) != 3) return;
    }
    if (ok(m)) {
        printf("0\n");
        return;
    }
    int lo = 1, hi = m;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (ok(mid)) lo = mid + 1;
        else hi = mid;
    }
    printf("%d\n", lo);
}

int main() {
    int test_cases = 1;
    while (test_cases--) {
        solve();
    }
    return 0;
}
