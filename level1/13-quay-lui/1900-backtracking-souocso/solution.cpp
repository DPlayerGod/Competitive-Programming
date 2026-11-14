#include <bits/stdc++.h>
using namespace std;

const int p[16] = {0,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
long long n, best;
void go(int i, long long cur, long long divisors, int maxExp) {
    best = max(best, divisors);
    if (i == 16) return;
    for (int e = 1; e <= maxExp; e++) {
        if (cur > n / p[i]) break;
        cur *= p[i]; go(i + 1, cur, divisors * (e + 1), e);
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        cin >> n; best = 1; go(1, 1, 1, 60); cout << best << '\n';
    }
}
