#include <bits/stdc++.h>
using namespace std;

int n;
long long m, a[15], cnt;

// a[0..i-1] are processed; sum = finished terms, term = the product still being built (signed), all mod m.
void go(int i, long long sum, long long term) {
    if (i == n) {
        if ((sum + term) % m == 0) cnt++;
        return;
    }
    long long v = a[i] % m;
    go(i + 1, (sum + term) % m, v);            // +
    go(i + 1, (sum + term) % m, (m - v) % m);  // -
    go(i + 1, sum, term * v % m);              // *
}

void solve() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    cnt = 0;
    go(1, 0, a[0] % m);
    cout << cnt << "\n";
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
