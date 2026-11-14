#include <bits/stdc++.h>
using namespace std;
int a[200005],ans[200005];
pair<int,int> q[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n,m; cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=m;i++) { cin >> q[i].first; q[i].second=i; }
    sort(a+1,a+n+1); sort(q+1,q+m+1);
    int j=0;
    for(int i=1;i<=m;i++) {
        while(j<n && a[j+1]<=q[i].first) j++;
        ans[q[i].second]=j;
    }
    for(int i=1;i<=m;i++) cout << ans[i] << ' ';
    cout << '\n';
}
