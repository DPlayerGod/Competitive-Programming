#include <bits/stdc++.h>
using namespace std;

int p[100005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) { int x; cin >> x; p[i]=p[i-1]+x; }
    int k = p[n], best = 0;
    if (k > 0) for (int r = k; r <= n; r++) best=max(best,p[r]-p[r-k]);
    cout << k-best << '\n';
}
