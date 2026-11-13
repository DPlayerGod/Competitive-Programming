#include <bits/stdc++.h>
using namespace std;

long long n;
int cnt[10];          // digits still unused
int rest = 0;         // unused digits other than '1'
vector<long long> divs, chosen;
bool found = false;

bool take(long long d) {  // uses the digits of d; on failure nothing changes
    int c[10] = {0};
    for (long long t = d; t > 0; t /= 10) c[t % 10]++;
    for (int i = 0; i < 10; i++)
        if (c[i] > cnt[i]) return false;
    for (int i = 0; i < 10; i++) {
        cnt[i] -= c[i];
        if (i != 1) rest -= c[i];
    }
    return true;
}

void give(long long d) {
    for (long long t = d; t > 0; t /= 10) {
        cnt[t % 10]++;
        if (t % 10 != 1) rest++;
    }
}

int maxDigits(long long R) {  // upper bound on the total digits of factors (>= 2) with product R
    int d10 = 0, d2 = 0;
    for (long long t = R; t > 0; t /= 10) d10++;
    for (long long t = R; t > 1; t /= 2) d2++;
    return d10 + d2;
}

// R still has to be split into factors >= lo, in non-decreasing order.
void go(long long lo, long long R) {
    if (found) return;
    if (rest > maxDigits(R)) return;  // the remaining digits can never be used up
    if (take(R)) {                    // R itself is the last factor
        if (rest == 0) {
            chosen.push_back(R);
            found = true;
            return;
        }
        give(R);
    }
    for (long long d : divs) {
        if (d < lo) continue;
        if (d > R / d) break;
        if (R % d != 0) continue;
        if (!take(d)) continue;
        chosen.push_back(d);
        go(d, R / d);
        if (found) return;
        chosen.pop_back();
        give(d);
    }
}

void solve() {
    string s;
    cin >> n >> s;
    for (char ch : s) {
        cnt[ch - '0']++;
        if (ch != '1') rest++;
    }
    for (long long d = 2; d * d <= n; d++)
        if (n % d == 0) {
            divs.push_back(d);
            if (d != n / d) divs.push_back(n / d);
        }
    sort(divs.begin(), divs.end());

    if (n == 1) found = (rest == 0);  // product 1: every number is 1
    else go(2, n);

    if (!found) {
        cout << -1 << "\n";
        return;
    }
    int extraOnes = cnt[1];  // every unused '1' is a number 1 on its own
    cout << chosen.size() + extraOnes << "\n";
    string out;
    for (long long d : chosen) out += to_string(d) + " ";
    for (int i = 0; i < extraOnes; i++) out += "1 ";
    out.pop_back();
    cout << out << "\n";
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
