#include <bits/stdc++.h>
using namespace std;

long long power(long long a, long long n, long long m) {
    if (n == 0) return 1 % m;
    long long h = power(a, n / 2, m);
    h = h * h % m;
    if (n % 2 == 1) h = h * (a % m) % m;
    return h;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long long a, n, m; cin >> a >> n >> m;
    cout << power(a, n, m) << '\n';
}
