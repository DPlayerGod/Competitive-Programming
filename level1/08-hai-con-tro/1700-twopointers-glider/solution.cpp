#include <bits/stdc++.h>
using namespace std;
long long x[200005],y[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; long long h; cin >> n >> h;
    for(int i=1;i<=n;i++) cin >> x[i] >> y[i];
    int l=1; long long gap=0,ans=0;
    for(int r=1;r<=n;r++) {
        if(r>1) gap+=x[r]-y[r-1];
        while(gap>=h) { gap-=x[l+1]-y[l]; l++; }
        ans=max(ans,y[r]-x[l]-gap+h);
    }
    cout << ans << '\n';
}
