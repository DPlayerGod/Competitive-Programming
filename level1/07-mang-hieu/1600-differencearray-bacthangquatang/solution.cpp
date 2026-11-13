#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
long long d2[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    while (q--) {
        int l, r; cin >> l >> r; long long len = r - l + 1;
        d2[l]++; d2[r + 1] -= len + 1; d2[r + 2] += len;
    }
    long long d1 = 0, cur = 0;
    for (int i = 1; i <= n; i++) {
        d1 += d2[i]; cur += d1;
        cout << cur << (i == n ? '\n' : ' ');
    }
}
