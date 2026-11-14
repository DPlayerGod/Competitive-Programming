#include <bits/stdc++.h>
using namespace std;
long long a[200005],c[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) { long long b; cin >> b; c[i]=a[i]-b; }
    sort(c+1,c+n+1);
    int l=1,r=n; long long ans=0;
    while(l<r) {
        if(c[l]+c[r]>0) { ans+=r-l; r--; }
        else l++;
    }
    cout << ans << '\n';
}
