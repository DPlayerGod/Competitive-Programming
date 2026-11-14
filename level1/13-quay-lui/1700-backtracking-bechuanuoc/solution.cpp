#include <bits/stdc++.h>
using namespace std;

int n, k;
long long h[15], best;
long long water() {
    long long L[15] = {}, R[15] = {}, ans = 0;
    for (int i = 1; i <= n; i++) L[i] = max(L[i - 1], h[i]);
    for (int i = n; i >= 1; i--) R[i] = max(R[i + 1], h[i]);
    for (int i = 1; i <= n; i++) ans += min(L[i], R[i]) - h[i];
    return ans;
}
void go(int i, int rem) {
    if (i == n + 1) { best = max(best, water()); return; }
    for (int v = 0; v <= rem; v++) {
        h[i] += v; go(i + 1, rem - v); h[i] -= v;
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> h[i];
    go(1, k); cout << best << '\n';
}
