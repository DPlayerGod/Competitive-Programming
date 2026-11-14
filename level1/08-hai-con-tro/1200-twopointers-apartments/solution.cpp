#include <bits/stdc++.h>
using namespace std;
long long a[200005],b[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n,m; long long k; cin >> n >> m >> k;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int j=1;j<=m;j++) cin >> b[j];
    sort(a+1,a+n+1); sort(b+1,b+m+1);
    int i=1,j=1,ans=0;
    while(i<=n && j<=m) {
        if(b[j]<a[i]-k) j++;
        else if(b[j]>a[i]+k) i++;
        else { ans++; i++; j++; }
    }
    cout << ans << '\n';
}
