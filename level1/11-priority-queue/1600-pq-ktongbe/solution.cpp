#include <bits/stdc++.h>
using namespace std;
const int N = 50005;
long long a[N], b[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int m, n, k; cin >> m >> n >> k;
    for (int i = 1; i <= m; i++) cin >> a[i];
    for (int j = 1; j <= n; j++) cin >> b[j];
    sort(a + 1, a + m + 1); sort(b + 1, b + n + 1);
    using T = tuple<long long, int, int>;
    priority_queue<T, vector<T>, greater<T>> pq;
    for (int i = 1; i <= min(m, k); i++)
        pq.push({a[i] + b[1], i, 1});
    for (int t = 1; t <= k; t++) {
        auto [s, i, j] = pq.top(); pq.pop();
        cout << s << '\n';
        if (j < n) pq.push({a[i] + b[j + 1], i, j + 1});
    }
}
