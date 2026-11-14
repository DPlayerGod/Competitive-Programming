#include <bits/stdc++.h>
using namespace std;
int cnt[128]; bool seen[128];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; string s; cin >> n >> s; s=" "+s;
    int need=0,have=0,l=1,ans=n;
    for(int i=1;i<=n;i++) if(!seen[(int)s[i]]) {
        seen[(int)s[i]]=true; need++;
    }
    for(int r=1;r<=n;r++) {
        if(cnt[(int)s[r]]++==0) have++;
        while(have==need) {
            ans=min(ans,r-l+1);
            if(--cnt[(int)s[l++]]==0) have--;
        }
    }
    cout << ans << '\n';
}
