#include <bits/stdc++.h>
using namespace std;

long long p[100005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) { int x; cin >> x; p[i]=p[i-1]+x; }
    long long ans = 0;
    for (int i = 1; i <= n; i++) ans=max(ans,llabs(p[n]-2*p[i]));
    cout << ans << '\n';
}
