#include <bits/stdc++.h>
using namespace std;

long long sumDigits(long long n) {
    if (n == 0) return 0;
    return n % 10 + sumDigits(n / 10);
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n; cin >> n;
    cout << sumDigits(n) << '\n';
}
