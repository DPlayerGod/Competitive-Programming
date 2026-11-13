#include <bits/stdc++.h>
using namespace std;

long long cnt[100005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, d; cin >> n >> d;
    long long v = 0, ans = 0; cnt[0] = 1;
    for (int i = 1; i <= n; i++) {
        long long x; cin >> x; v = ((v+x)%d+d)%d;
        ans += cnt[v]; cnt[v]++;
    }
    cout << ans << '\n';
}
