#include <bits/stdc++.h>
using namespace std;

int p[505][505];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) {
        int x;cin>>x;p[i][j]=x+p[i-1][j]+p[i][j-1]-p[i-1][j-1];
    }
    int ans=INT_MAX;
    for(int i=1;i<n;i++) for(int j=1;j<n;j++) {
        int a=p[i][j], b=p[i][n]-a, c=p[n][j]-a, d=p[n][n]-a-b-c;
        ans=min(ans,max({a,b,c,d})-min({a,b,c,d}));
    }
    cout<<ans<<'\n';
}
