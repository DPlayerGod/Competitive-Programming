#include <bits/stdc++.h>
using namespace std;
int a[200005],b[200005],cnt[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;

    for(int i=1;i<=n;i++) { cin >> a[i]; b[i]=a[i]; }
    sort(b+1,b+n+1);
    int m=unique(b+1,b+n+1)-b-1;
    for(int i=1;i<=n;i++) a[i]=lower_bound(b+1,b+m+1,a[i])-b;

    int l=1,ans=0;
    for(int r=1;r<=n;r++) {
        cnt[a[r]]++;
        while(cnt[a[r]]>1) cnt[a[l++]]--;
        ans=max(ans,r-l+1);
    }
    cout << ans << '\n';
}
