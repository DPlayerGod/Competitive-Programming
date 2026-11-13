#include <bits/stdc++.h>
using namespace std;

int n, m;
string s[10];
int c[10], match[10];
long long cnt = 0;

// Positions 0..i-1 of the code are chosen; match[k] = positions equal to attempt k so far.
void go(int i) {
    if (i == n) {  // the pruning guarantees match[k] == c[k] here
        cnt++;
        return;
    }
    for (char b : {'0', '1'}) {
        bool ok = true;
        int left = n - i - 1;  // positions after this one
        for (int k = 0; k < m; k++) {
            if (s[k][i] == b) match[k]++;
            if (match[k] > c[k] || match[k] + left < c[k]) ok = false;
        }
        if (ok) go(i + 1);
        for (int k = 0; k < m; k++)
            if (s[k][i] == b) match[k]--;
    }
}

void solve() {
    cin >> n >> m;
    for (int k = 0; k < m; k++) cin >> s[k] >> c[k];
    go(0);
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
