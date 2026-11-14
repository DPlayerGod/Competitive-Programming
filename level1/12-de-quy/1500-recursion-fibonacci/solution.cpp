#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
pair<long long, long long> fib(long long n) {
    if (n == 0) return {0, 1};
    auto [a, b] = fib(n / 2);
    long long c = a * ((2 * b - a + MOD) % MOD) % MOD;
    long long d = (a * a + b * b) % MOD;
    if (n % 2 == 0) return {c, d};
    return {d, (c + d) % MOD};
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n; cin >> n;
    cout << fib(n).first << '\n';
}
