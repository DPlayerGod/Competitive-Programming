#include <bits/stdc++.h>
using namespace std;

int n;
string s;

// Pruning: put '1' at position i only if position i - 1 holds '0'.
void gen(int i) {
    if (i == n) {
        cout << s << "\n";
        return;
    }
    s[i] = '0';
    gen(i + 1);
    if (i == 0 || s[i - 1] == '0') {
        s[i] = '1';
        gen(i + 1);
    }
}

void solve() {
    cin >> n;
    s.assign(n, '0');
    gen(0);
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
