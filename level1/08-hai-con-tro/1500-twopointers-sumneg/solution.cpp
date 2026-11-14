#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; long long x; cin >> n >> x;
    map<long long,int> cnt; cnt[0]=1;
    long long p=0,ans=0;
    for(int i=1;i<=n;i++) {
        long long a; cin >> a; p+=a;
        auto it=cnt.find(p-x);
        if(it!=cnt.end()) ans+=it->second;
        cnt[p]++;
    }
    cout << ans << '\n';
}
