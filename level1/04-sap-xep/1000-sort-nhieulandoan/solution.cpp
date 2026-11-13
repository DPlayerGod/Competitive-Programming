#include <bits/stdc++.h>
using namespace std;

int n, q, a[1005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    if (!(cin >> n >> q)) return 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (q--) {
        int l, r, t;
        cin >> l >> r >> t;
        if (t == 0) sort(a + l, a + r + 1);
        else        sort(a + l, a + r + 1, greater<int>());
    }
    for (int i = 1; i <= n; i++) cout << a[i] << (i == n ? '\n' : ' ');
    return 0;
}
