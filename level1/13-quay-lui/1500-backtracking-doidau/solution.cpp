#include <bits/stdc++.h>
using namespace std;

int n;
long long h[20], w[20][20], best = LLONG_MAX;
int s[20];

// Signs s[0..i-1] are chosen with penalty val. Choosing s[i] adds only the new terms:
// h[i] * s[i] and w[j][i] * s[j] * s[i] for j < i.
void go(int i, long long val) {
    if (i == n) {
        best = min(best, val);
        return;
    }
    for (int sg : {1, -1}) {
        long long add = h[i] * sg;
        for (int j = 0; j < i; j++) add += w[j][i] * s[j] * sg;
        s[i] = sg;
        go(i + 1, val + add);
    }
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> h[i];
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) cin >> w[i][j];
    go(0, 0);
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
