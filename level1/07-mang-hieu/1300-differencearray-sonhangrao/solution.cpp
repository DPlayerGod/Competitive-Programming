#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
int L[N], R[N], d[N], one[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> L[i] >> R[i]; d[L[i]]++; d[R[i] + 1]--;
    }
    int cur = 0, total = 0, loss = n;
    for (int i = 1; i <= n; i++) {
        cur += d[i]; total += (cur > 0); one[i] = one[i - 1] + (cur == 1);
    }
    for (int i = 1; i <= m; i++) loss = min(loss, one[R[i]] - one[L[i] - 1]);
    cout << total - loss << '\n';
}
