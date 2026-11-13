#include <bits/stdc++.h>
using namespace std;

const int N = 1000005;
int kho[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> kho[i];
    for (int j = 1; j <= m; j++) {
        int b; cin >> b;
        if (kho[b] > 0) {
            cout << "YES" << '\n';
            kho[b]--;
        } else cout << "NO" << '\n';
    }
}
