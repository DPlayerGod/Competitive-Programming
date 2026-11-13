#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<vector<long long>> s(n + 1, vector<long long>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            long long a;
            cin >> a;
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a;
        }
    }

    long long best = 0;
    for (int i = k; i <= n; i++) {
        for (int j = k; j <= n; j++) {
            long long cur = s[i][j] - s[i - k][j] - s[i][j - k] + s[i - k][j - k];
            best = max(best, cur);
        }
    }
    cout << best << "\n";
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
