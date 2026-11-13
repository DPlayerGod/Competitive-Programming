#include <bits/stdc++.h>
using namespace std;

const int OFFSET = 100000;
int cnt[2 * OFFSET + 1];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        cnt[x + OFFSET]++;
    }
    int dem = 0;
    for (int v = 0; v <= 2 * OFFSET; v++)
        if (cnt[v] > 2) dem++;
    cout << dem << '\n';
}
