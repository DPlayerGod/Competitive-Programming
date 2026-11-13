#include <bits/stdc++.h>
using namespace std;

long long cnt[101];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    long long dem = 0;
    for (int j = 1; j <= n; j++) {
        int x; cin >> x;
        for (int v = 1; v <= x; v++) dem += cnt[v];
        cnt[x]++;
    }
    cout << dem << '\n';
}
