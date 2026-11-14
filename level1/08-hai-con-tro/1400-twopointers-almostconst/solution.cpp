#include <bits/stdc++.h>
using namespace std;
int a[100005],cnt[100005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    int l=1,distinct=0,ans=0;
    for(int r=1;r<=n;r++) {
        if(cnt[a[r]]++==0) distinct++;
        while(distinct>2) if(--cnt[a[l++]]==0) distinct--;
        ans=max(ans,r-l+1);
    }
    cout << ans << '\n';
}
