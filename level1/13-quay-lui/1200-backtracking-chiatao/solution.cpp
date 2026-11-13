#include <bits/stdc++.h>
using namespace std;

int n;
long long p[25], total = 0, best = LLONG_MAX;

// Apples 0..i-1 are placed, group 1 weighs sum1. Group 2 is total - sum1, no need to carry it.
void go(int i, long long sum1) {
    if (2 * sum1 >= total) {               // group 1 is heavy enough: the rest go to group 2
        best = min(best, 2 * sum1 - total);
        return;
    }
    if (i == n) {
        best = min(best, total - 2 * sum1);
        return;
    }
    go(i + 1, sum1 + p[i]);
    go(i + 1, sum1);
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        total += p[i];
    }
    go(1, p[0]);  // symmetry: apple 1 is always in group 1
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
