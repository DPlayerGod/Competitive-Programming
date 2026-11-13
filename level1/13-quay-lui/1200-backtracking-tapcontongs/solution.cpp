#include <bits/stdc++.h>
using namespace std;

int n;
long long S, a[30], suf[30];  // suf[i] = a[i] + ... + a[n - 1]
long long cnt = 0;

// State (i, sum): values 0..i-1 are decided, sum is their chosen total.
void go(int i, long long sum) {
    if (sum > S) return;           // already too much (all a_i > 0)
    if (sum + suf[i] < S) return;  // even taking everything left is not enough
    if (i == n) {
        if (sum == S) cnt++;
        return;
    }
    go(i + 1, sum);
    go(i + 1, sum + a[i]);
}

void solve() {
    cin >> n >> S;
    for (int i = 0; i < n; i++) cin >> a[i];
    suf[n] = 0;
    for (int i = n - 1; i >= 0; i--) suf[i] = suf[i + 1] + a[i];
    go(0, 0);
    cout << cnt << "\n";
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
