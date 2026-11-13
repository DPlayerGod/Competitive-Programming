#include <bits/stdc++.h>
using namespace std;

long long a[100005], s[300005], w[300005];
long long sum(long long p[], int l, int r) {
    return l > r ? 0 : p[r] - p[l-1];
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= 3*n; i++) {
        long long b = a[(i-1)%n+1];
        s[i] = s[i-1]+b; w[i] = w[i-1]+b*i;
    }
    int right = n/2, left = n-1-right;
    long long ans = LLONG_MAX;
    for (int x = 1; x <= n; x++) {
        int p = x+n;
        long long cost = sum(w,p+1,p+right)-p*sum(s,p+1,p+right)
                       + p*sum(s,p-left,p-1)-sum(w,p-left,p-1);
        ans = min(ans, cost);
    }
    cout << ans << '\n';
}
