#include <bits/stdc++.h>
using namespace std;

int n, k, a[25];

// Choosing the i-th number, the smallest allowed value is start. k - i numbers are
// still needed, so the value can be at most n - (k - i) + 1.
void comb(int i, int start) {
    if (i == k) {
        for (int j = 0; j < k; j++) cout << a[j] << (j == k - 1 ? '\n' : ' ');
        return;
    }
    for (int v = start; v <= n - (k - i) + 1; v++) {
        a[i] = v;
        comb(i + 1, v + 1);
    }
}

void solve() {
    cin >> n >> k;
    comb(0, 1);
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
