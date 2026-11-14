#include <bits/stdc++.h>
using namespace std;
long long a[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n,k; cin >> n >> k;
    for(int i=1;i<=n;i++) cin >> a[i];
    long long s=0;
    for(int i=1;i<=k;i++) s+=a[i];
    long long ans=s;
    for(int r=k+1;r<=n;r++) {
        s+=a[r]-a[r-k]; ans=max(ans,s);
    }
    cout << ans << '\n';
}
