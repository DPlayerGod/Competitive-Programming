#include <bits/stdc++.h>
using namespace std;

int n, m, x;
int need[10];                    // a[i] must be a multiple of need[i]
vector<pair<int, int>> con[10];  // con[i]: constraints (j, g) with j < i
vector<int> order;               // variables that appear in some constraint
int a[10];
long long cnt = 0;

// Only constrained variables are tried; each tries multiples of need[i] and checks
// its constraints with already assigned (earlier) variables.
void go(int k) {
    if (k == (int)order.size()) {
        cnt++;
        return;
    }
    int i = order[k];
    for (int v = need[i]; v <= x; v += need[i]) {
        bool ok = true;
        for (auto [j, g] : con[i])
            if (__gcd(v, a[j]) != g) {
                ok = false;
                break;
            }
        if (!ok) continue;
        a[i] = v;
        go(k + 1);
    }
}

void solve() {
    cin >> n >> m >> x;
    vector<bool> inv(n, false);
    for (int i = 0; i < n; i++) need[i] = 1;
    for (int t = 0; t < m; t++) {
        int i, j, g;
        cin >> i >> j >> g;
        i--, j--;
        if (i > j) swap(i, j);
        con[j].push_back({i, g});
        inv[i] = inv[j] = true;
        need[i] = need[i] / __gcd(need[i], g) * g;
        need[j] = need[j] / __gcd(need[j], g) * g;
    }
    long long freeWays = 1;
    for (int i = 0; i < n; i++) {
        if (inv[i]) order.push_back(i);
        else freeWays *= x;  // a free variable takes any value in [1, x]
    }
    go(0);
    cout << cnt * freeWays << "\n";
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
