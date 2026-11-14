#include <bits/stdc++.h>
using namespace std;

int n;
long long a[12][12], best = LLONG_MAX, minEdge = LLONG_MAX;
bool used[12];
void go(int u, int taken, long long cost) {
    if (cost + (n - taken + 1) * minEdge >= best) return;
    if (taken == n) { best = min(best, cost + a[u][1]); return; }
    for (int v = 2; v <= n; v++) if (!used[v]) {
        used[v] = true;
        go(v, taken + 1, cost + a[u][v]);
        used[v] = false;
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) {
        cin >> a[i][j];
        if (i != j) minEdge = min(minEdge, a[i][j]);
    }
    used[1] = true; go(1, 1, 0); cout << best << '\n';
}
