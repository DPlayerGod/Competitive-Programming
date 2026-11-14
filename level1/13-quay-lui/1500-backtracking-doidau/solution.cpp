#include <bits/stdc++.h>
using namespace std;

int n, s[20];
long long h[20], w[20][20], best = LLONG_MAX;
void go(int i, long long val) {
    if (i == n + 1) { best = min(best, val); return; }
    for (int sign : {1, -1}) {
        long long add = h[i] * sign;
        for (int j = 1; j < i; j++) add += w[j][i] * s[j] * sign;
        s[i] = sign; go(i + 1, val + add);
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> h[i];
    for (int i = 1; i <= n; i++) for (int j = i + 1; j <= n; j++) cin >> w[i][j];
    go(1, 0); cout << best << '\n';
}
