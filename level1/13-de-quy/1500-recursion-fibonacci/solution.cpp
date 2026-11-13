#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007LL;

// Returns (F(n), F(n + 1)) from the pair of k = n / 2:
// F(2k) = F(k) (2F(k+1) - F(k)), F(2k+1) = F(k)^2 + F(k+1)^2.
pair<long long, long long> fib(long long n) {
    if (n == 0) return {0, 1};
    auto [a, b] = fib(n / 2);
    long long c = a * ((2 * b - a + MOD) % MOD) % MOD;
    long long d = (a * a + b * b) % MOD;
    if (n % 2 == 0) return {c, d};
    return {d, (c + d) % MOD};
}

void solve() {
    long long n;
    cin >> n;
    cout << fib(n).first << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases = 1;
    while (test_cases--) {
        solve();
    }
    return 0;
}
