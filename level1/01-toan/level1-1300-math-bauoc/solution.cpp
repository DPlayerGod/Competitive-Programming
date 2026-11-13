#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    long long n; cin >> n;
    int cnt = 0;
    // số có đúng 3 ước là p^2 với p nguyên tố
    for (long long p = 2; p * p <= n; p++)
        if (isPrime(p)) cnt++;
    cout << cnt << '\n';
}
