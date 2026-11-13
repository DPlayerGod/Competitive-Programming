#include <bits/stdc++.h>
using namespace std;

long long s[100005], w[100005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        long long x; cin >> x;
        s[i] = s[i-1] + x; w[i] = w[i-1] + 1LL*i*x;
    }
    while (q--) {
        int l, r; cin >> l >> r;
        cout << w[r]-w[l-1] - 1LL*(l-1)*(s[r]-s[l-1]) << '\n';
    }
}
