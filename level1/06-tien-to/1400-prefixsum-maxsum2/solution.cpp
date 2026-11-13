#include <bits/stdc++.h>
using namespace std;

long long a[100007], l[100007], r[100007];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    l[0] = r[n+1] = LLONG_MIN/4;
    long long cur = 0;
    for (int i = 1; i <= n; i++) { cur=max(a[i],cur+a[i]); l[i]=max(l[i-1],cur); }
    cur=0;
    for (int i = n; i >= 1; i--) { cur=max(a[i],cur+a[i]); r[i]=max(r[i+1],cur); }
    long long ans=LLONG_MIN;
    for (int i = 1; i < n; i++) ans=max(ans,l[i]+r[i+1]);
    cout << ans << '\n';
}
