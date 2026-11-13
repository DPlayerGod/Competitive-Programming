#include <bits/stdc++.h>
using namespace std;

// Digit sum of n = last digit + digit sum of n / 10; stops at n = 0.
long long digitSum(long long n) {
    if (n == 0) return 0;
    return n % 10 + digitSum(n / 10);
}

void solve() {
    long long n;
    cin >> n;
    cout << digitSum(n) << "\n";
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
