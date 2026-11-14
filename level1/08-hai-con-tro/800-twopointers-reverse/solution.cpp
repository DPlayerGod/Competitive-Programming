#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    for (int i=1;i<=n;i++) cin >> a[i];
    bool ok=true;
    for (int l=1,r=n;l<r;l++,r--) if(a[l]!=a[r]) ok=false;
    cout << (ok ? "YES" : "NO") << '\n';
    for (int l=1,r=n;l<r;l++,r--) swap(a[l],a[r]);
    for (int i=1;i<=n;i++) cout << a[i] << ' ';
    cout << '\n';
}
