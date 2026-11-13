#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
long long a[N], d[N], timesD[N], value[N];
int L[N], R[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m, k; cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> L[i] >> R[i] >> value[i];
    while (k--) {
        int x, y; cin >> x >> y; timesD[x]++; timesD[y + 1]--;
    }
    long long times = 0;
    for (int i = 1; i <= m; i++) {
        times += timesD[i]; long long v = times * value[i];
        d[L[i]] += v; d[R[i] + 1] -= v;
    }
    long long cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += d[i]; cout << a[i] + cur << (i == n ? '\n' : ' ');
    }
}
