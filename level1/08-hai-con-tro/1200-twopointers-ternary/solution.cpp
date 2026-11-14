#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s; s=" "+s;
        int n=s.size()-1,cnt[4]={},l=1,ans=n+1;
        for(int r=1;r<=n;r++) {
            cnt[s[r]-'0']++;
            while(cnt[1] && cnt[2] && cnt[3]) {
                ans=min(ans,r-l+1); cnt[s[l++]-'0']--;
            }
        }
        cout << (ans==n+1 ? 0 : ans) << '\n';
    }
}
