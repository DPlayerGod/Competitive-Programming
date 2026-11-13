#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    long long prev; cin >> prev;
    long long ans = 0;
    for (int i = 2; i <= n; i++) {
        long long x; cin >> x; ans += llabs(x - prev); prev = x;
    }
    cout << ans << '\n';
}
