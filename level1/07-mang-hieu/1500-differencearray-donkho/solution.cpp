#include <bits/stdc++.h>
using namespace std;

// Greedy from the left: cell i can still be emptied only by passes starting at
// i, so exactly rem = a_i - cur of them must start there. A difference array
// marks where those passes stop covering cells.
void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n + 1), d(n + 2, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    long long cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += d[i];
        long long rem = a[i] - cur;
        if (rem < 0) {
            cout << "NO\n";
            return;
        }
        if (rem > 0) {
            if (i + k - 1 > n) {
                cout << "NO\n";
                return;
            }
            cur += rem;
            d[i + k] -= rem;
        }
    }
    cout << "YES\n";
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
