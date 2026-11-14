#include <bits/stdc++.h>
using namespace std;
int a[200005],b[200005],c[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n,m; cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int j=1;j<=m;j++) cin >> b[j];
    int i=1,j=1,t=0;
    while(i<=n && j<=m) {
        if(a[i]==b[j]) { c[++t]=a[i]; i++; j++; }
        else if(a[i]<b[j]) i++;
        else j++;
    }
    cout << t << '\n';
    for(int k=1;k<=t;k++) cout << c[k] << ' ';
    cout << '\n';
}
