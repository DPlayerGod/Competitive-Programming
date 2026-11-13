#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

int main() {
    int n; cin >> n;
    vector<char> nt(n + 1, 1);
    long long ans = 1;
    for (long long p = 2; p <= n; p++) {
        if (!nt[p]) continue;
        for (long long j = p * p; j <= n; j += p) nt[j] = 0;
        long long e = 0, t = n;
        while (t > 0) { t /= p; e += t; }   // n/p + n/p^2 + ...
        ans = ans * (e + 1) % MOD;
    }
    cout << ans << '\n';
}
