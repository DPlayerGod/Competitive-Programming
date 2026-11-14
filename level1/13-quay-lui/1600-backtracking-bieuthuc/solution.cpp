#include <bits/stdc++.h>
using namespace std;

int n;
long long m, a[15], ans;
void go(int i, long long sum, long long term) {
    if (i == n + 1) { if ((sum + term) % m == 0) ans++; return; }
    long long v = a[i] % m;
    go(i + 1, (sum + term) % m, v);
    go(i + 1, (sum + term) % m, (m - v) % m);
    go(i + 1, sum, term * v % m);
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) cin >> a[i];
        ans = 0; go(2, 0, a[1] % m); cout << ans << '\n';
    }
}
