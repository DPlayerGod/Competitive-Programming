#include <bits/stdc++.h>
using namespace std;
long long a[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; long long X; cin >> n >> X;
    for(int i=1;i<=n;i++) cin >> a[i];
    sort(a+1,a+n+1);
    int l=1,r=n; long long ans=0;
    while(l<r) {
        if(a[l]+a[r]<=X) { ans+=r-l; l++; }
        else r--;
    }
    cout << ans << '\n';
}
