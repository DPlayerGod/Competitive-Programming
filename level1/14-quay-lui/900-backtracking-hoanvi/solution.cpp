#include <bits/stdc++.h>
using namespace std;

int n, a[10];
bool used[10];

// Position i tries every unused value in increasing order; used[] is undone on return.
void perm(int i) {
    if (i == n) {
        for (int j = 0; j < n; j++) cout << a[j] << (j == n - 1 ? '\n' : ' ');
        return;
    }
    for (int v = 1; v <= n; v++)
        if (!used[v]) {
            a[i] = v;
            used[v] = true;
            perm(i + 1);
            used[v] = false;
        }
}

void solve() {
    cin >> n;
    perm(0);
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
