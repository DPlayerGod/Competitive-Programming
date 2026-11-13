#include <bits/stdc++.h>
using namespace std;

long long a[100005], p[100005], s[100007];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) p[i] = gcd(p[i-1], a[i]);
    for (int i = n; i >= 1; i--) s[i] = gcd(s[i+1], a[i]);
    long long ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, gcd(p[i-1], s[i+1]));
    cout << ans << '\n';
}
