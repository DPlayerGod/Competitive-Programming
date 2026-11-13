#include <bits/stdc++.h>
using namespace std;

long long p[100005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        long long x; cin >> x; p[i] = p[i-1] + x;
    }
    while (q--) {
        int l, r; cin >> l >> r;
        cout << p[r] - p[l-1] << '\n';
    }
}
