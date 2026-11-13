#include <bits/stdc++.h>
using namespace std;

// a^n = h * h * (a if n odd), h = a^(n / 2): one recursive call per level, O(log n).
long long power(long long a, long long n, long long m) {
    if (n == 0) return 1 % m;
    long long h = power(a, n / 2, m);
    h = h * h % m;
    if (n % 2 == 1) h = h * (a % m) % m;
    return h;
}

void solve() {
    long long a, n, m;
    cin >> a >> n >> m;
    cout << power(a, n, m) << "\n";
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
