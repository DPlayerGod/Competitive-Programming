#include <bits/stdc++.h>
using namespace std;

int n;
long long a[25], best = LLONG_MAX;
void go(int i, long long diff) {
    if (i == n + 1) { best = min(best, abs(diff)); return; }
    go(i + 1, diff + a[i]);
    go(i + 1, diff - a[i]);
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    go(1, 0);
    cout << best << '\n';
}
