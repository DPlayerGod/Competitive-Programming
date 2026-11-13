#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    long long total=0, hi=LLONG_MIN, lo=LLONG_MAX, c=0, d=0;
    for (int i=1;i<=n;i++) {
        long long x; cin >> x; total+=x;
        c=max(x,c+x); hi=max(hi,c); d=min(x,d+x); lo=min(lo,d);
    }
    cout << (hi<0 ? hi : max(hi,total-lo)) << '\n';
}
