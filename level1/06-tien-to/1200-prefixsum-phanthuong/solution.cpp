#include <bits/stdc++.h>
using namespace std;
long long p[1005][1005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n,k; cin>>n>>k;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) {
        long long x;cin>>x;p[i][j]=x+p[i-1][j]+p[i][j-1]-p[i-1][j-1];
    }
    long long ans=0;
    for(int i=k;i<=n;i++) for(int j=k;j<=n;j++)
        ans=max(ans,p[i][j]-p[i-k][j]-p[i][j-k]+p[i-k][j-k]);
    cout<<ans<<'\n';
}
