#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    int l=1,r=n; long long ta=0,tb=0;
    while(l<=r) {
        if(ta<=tb) ta+=a[l++]; else tb+=a[r--];
    }
    cout << l-1 << ' ' << n-l+1 << '\n';
}
