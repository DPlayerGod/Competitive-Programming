#include <bits/stdc++.h>
using namespace std;

int n;
long long S, a[30], suf[30], ans;
void go(int i, long long sum) {
    if (sum > S || sum + suf[i] < S) return;
    if (i == n + 1) { ans++; return; }
    go(i + 1, sum);
    go(i + 1, sum + a[i]);
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> S;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = n; i >= 1; i--) suf[i] = suf[i + 1] + a[i];
    go(1, 0); cout << ans << '\n';
}
