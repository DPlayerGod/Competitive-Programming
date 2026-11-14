#include <bits/stdc++.h>
using namespace std;
int n,a[200005],b[200005],cnt[200005];
long long atMost(int k) {
    if(k<=0) return 0;
    fill(cnt,cnt+n+1,0);
    int l=1,distinct=0; long long ans=0;
    for(int r=1;r<=n;r++) {
        if(cnt[a[r]]++==0) distinct++;
        while(distinct>k) if(--cnt[a[l++]]==0) distinct--;
        ans+=r-l+1;
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int k; cin >> n >> k;

    for(int i=1;i<=n;i++) { cin >> a[i]; b[i]=a[i]; }
    sort(b+1,b+n+1);
    int m=unique(b+1,b+n+1)-b-1;
    for(int i=1;i<=n;i++) a[i]=lower_bound(b+1,b+m+1,a[i])-b;
    cout << atMost(k) << '\n';
}
