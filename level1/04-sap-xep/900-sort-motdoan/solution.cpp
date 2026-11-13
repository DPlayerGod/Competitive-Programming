#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l, r;
    if (!(cin >> n >> l >> r)) return 0;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a.begin() + l, a.begin() + r + 1);
    for (int i = 1; i <= n; i++) cout << a[i] << (i == n ? '\n' : ' ');
    return 0;
}
