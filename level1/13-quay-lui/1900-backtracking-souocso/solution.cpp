#include <bits/stdc++.h>
using namespace std;

const int P[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
long long n, best;

// Primes P[0..i-1] are used, value cur, divisor count cnt; the exponent of P[i] is at most maxExp.
void go(int i, long long cur, long long cnt, int maxExp) {
    best = max(best, cnt);
    if (i == 15) return;
    long long p = P[i];
    for (int e = 1; e <= maxExp; e++) {
        if (cur > n / p) break;  // cur * p > n, checked without overflow
        cur *= p;
        go(i + 1, cur, cnt * (e + 1), e);
    }
}

void solve() {
    cin >> n;
    best = 0;
    go(0, 1, 1, 64);
    cout << best << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases = 1;
    cin >> test_cases;
    while (test_cases--) {
        solve();
    }
    return 0;
}
