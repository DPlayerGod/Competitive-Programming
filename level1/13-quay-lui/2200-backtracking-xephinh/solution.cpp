#include <bits/stdc++.h>
using namespace std;

int freq[10], nonOne, nd, nk;
long long divisors[2000], chosen[1005];
bool take(long long v, int sign) {
    int f[10] = {};
    for (long long t = v; t; t /= 10) f[t % 10]++;
    if (sign == -1) for (int d = 0; d < 10; d++) if (f[d] > freq[d]) return false;
    for (int d = 0; d < 10; d++) { freq[d] += sign * f[d]; if (d != 1) nonOne += sign * f[d]; }
    return true;
}
bool go(long long low, long long rem) {
    if (rem == 1) return nonOne == 0;
    int bound = 0;
    for (long long t = rem; t; t /= 10) bound++;
    for (long long t = rem; t > 1; t /= 2) bound++;
    if (nonOne > bound) return false;
    if (take(rem, -1)) {
        if (!nonOne) { chosen[++nk] = rem; return true; }
        take(rem, 1);
    }
    for (int i = 1; i <= nd; i++) {
        long long d = divisors[i];
        if (d < low) continue;
        if (d > rem / d) break;
        if (rem % d || !take(d, -1)) continue;
        chosen[++nk] = d;
        if (go(d, rem / d)) return true;
        nk--; take(d, 1);
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long long n; string s; cin >> n >> s;
    for (char c : s) { freq[c - '0']++; nonOne += (c != '1'); }
    for (long long d = 2; d <= n / d; d++) if (n % d == 0) {
        divisors[++nd] = d; if (d != n / d) divisors[++nd] = n / d;
    }
    sort(divisors + 1, divisors + nd + 1);
    if (!go(2, n)) { cout << -1 << '\n'; return 0; }
    while (freq[1]--) chosen[++nk] = 1;
    cout << nk << '\n';
    for (int i = 1; i <= nk; i++) cout << chosen[i] << (i == nk ? '\n' : ' ');
}
