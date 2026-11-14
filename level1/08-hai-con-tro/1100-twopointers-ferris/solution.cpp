#include <bits/stdc++.h>
using namespace std;
long long p[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; long long x; cin >> n >> x;
    for(int i=1;i<=n;i++) cin >> p[i];
    sort(p+1,p+n+1);
    int l=1,r=n,ans=0;
    while(l<=r) {
        if(l<r && p[l]+p[r]<=x) l++;
        r--; ans++;
    }
    cout << ans << '\n';
}
