#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m;
    if (!(cin >> n >> m)) return 0;
    vector<int> a(n), b(m);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    vector<int> c;
    c.reserve(n + m);
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) c.push_back(a[i++]);
        else c.push_back(b[j++]);
    }
    while (i < n) c.push_back(a[i++]);
    while (j < m) c.push_back(b[j++]);
    for (int k = 0; k < n + m; k++) {
        if (k > 0) cout << ' ';
        cout << c[k];
    }
    cout << '\n';
}
