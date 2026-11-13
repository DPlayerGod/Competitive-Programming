#include <bits/stdc++.h>
using namespace std;
long long q[500005], p[500005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin>>t;
    while(t--) {
        string s; int w; cin>>s>>w;
        int cnt=0;
        for(int i=0;i<(int)s.size();i++) if(s[i]=='.') {
            cnt++; q[cnt]=i+1-cnt;
        }
        if(cnt<w) {cout<<-1<<'\n';continue;}
        p[0]=0;
        for(int i=1;i<=cnt;i++) p[i]=p[i-1]+q[i];
        long long ans=LLONG_MAX;
        for(int l=1;l+w-1<=cnt;l++) {
            int r=l+w-1,m=(l+r)/2;
            long long cost=q[m]*(m-l)-(p[m-1]-p[l-1])
                          +(p[r]-p[m])-q[m]*(r-m);
            ans=min(ans,cost);
        }
        cout<<ans<<'\n';
    }
}
