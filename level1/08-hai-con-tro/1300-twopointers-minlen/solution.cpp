#include <bits/stdc++.h>
using namespace std;
long long a[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; long long S; cin >> n >> S;
    for(int i=1;i<=n;i++) cin >> a[i];
    int l=1; long long s=0,ans=n+1;
    for(int r=1;r<=n;r++) {
        s+=a[r];
        while(s>=S) {
            ans=min(ans,1LL*(r-l+1)); s-=a[l++];
        }
    }
    cout << (ans==n+1 ? -1 : ans) << '\n';
}
