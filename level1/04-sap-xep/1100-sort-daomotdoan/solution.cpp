#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    vector<int> b = a;
    sort(b.begin(), b.end());
    int l = 0, r = n - 1;
    while (l < n && a[l] == b[l]) l++;
    if (l == n) { cout << "yes\n1 1\n"; return 0; }
    while (a[r] == b[r]) r--;
    reverse(a.begin() + l, a.begin() + r + 1);
    if (a == b) cout << "yes\n" << l + 1 << ' ' << r + 1 << '\n';
    else cout << "no\n";
}
