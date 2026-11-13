#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long k; cin >> n >> k;
    map<long long,int> cnt; cnt[0] = 1;
    long long p = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        long long x; cin >> x; p += x-k;
        ans += cnt[p]; cnt[p]++;
    }
    cout << ans << '\n';
}
