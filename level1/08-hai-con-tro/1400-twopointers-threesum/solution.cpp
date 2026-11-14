#include <bits/stdc++.h>
using namespace std;
pair<long long,int> a[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; long long x; cin >> n >> x;
    for(int i=1;i<=n;i++) { cin >> a[i].first; a[i].second=i; }
    sort(a+1,a+n+1);
    for(int i=1;i<=n-2;i++) {
        int l=i+1,r=n;
    while(l<r) {
        long long s=a[l].first+a[r].first+a[i].first;
        if(s==x) {
            cout << a[i].second << ' ' << a[l].second << ' ' << a[r].second << '\n';
            return 0;
        }
        if(s<x) l++; else r--;
    }
    }
    cout << "IMPOSSIBLE\n";
}
