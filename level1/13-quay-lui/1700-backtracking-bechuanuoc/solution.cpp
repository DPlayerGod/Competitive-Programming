#include <bits/stdc++.h>
using namespace std;

int n, k;
long long h[15], best = 0;

long long water() {
    long long L[15], R[15], w = 0;
    for (int i = 0; i < n; i++) L[i] = max(i ? L[i - 1] : 0LL, h[i]);
    for (int i = n - 1; i >= 0; i--) R[i] = max(i < n - 1 ? R[i + 1] : 0LL, h[i]);
    for (int i = 0; i < n; i++) w += min(L[i], R[i]) - h[i];
    return w;
}

// Decide how many stones go on column i; rem stones are left (need not all be used).
void go(int i, int rem) {
    if (i == n) {
        best = max(best, water());
        return;
    }
    for (int v = 0; v <= rem; v++) {
        h[i] += v;
        go(i + 1, rem - v);
        h[i] -= v;
    }
}

void solve() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> h[i];
    go(0, k);
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
