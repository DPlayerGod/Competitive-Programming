#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n,k; string s; cin >> n >> k >> s;
    s=" "+s; int ans=0;
    for(char goal : {'a','b'}) {
        int l=1,bad=0;
        for(int r=1;r<=n;r++) {
            bad+=(s[r]!=goal);
            while(bad>k) bad-=(s[l++]!=goal);
            ans=max(ans,r-l+1);
        }
    }
    cout << ans << '\n';
}
