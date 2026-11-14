#include <bits/stdc++.h>
using namespace std;
int a[200005],b[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n,m; cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int j=1;j<=m;j++) cin >> b[j];
    int j=0;
    for(int i=1;i<=n;i++) {
        while(j<m && b[j+1]<=a[i]) j++;
        cout << j << ' ';
    }
    cout << '\n';
}
