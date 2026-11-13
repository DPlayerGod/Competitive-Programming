#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
long long a[N], d[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    long long cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += d[i]; long long rem = a[i] - cur;
        if (rem < 0 || (rem > 0 && i + k - 1 > n)) {
            cout << "NO\n"; return 0;
        }
        if (rem > 0) { cur += rem; d[i + k] -= rem; }
    }
    cout << "YES\n";
}
