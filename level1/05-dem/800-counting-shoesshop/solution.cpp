#include <bits/stdc++.h>
using namespace std;

const int N = 1000005;
int cnt[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int m, n; cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        int t; cin >> t;
        cnt[t]++;
    }
    long long doi = 0;
    for (int t = 1; t <= m; t++) doi += cnt[t] / 2;
    cout << doi << '\n';
}
