#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
long long a[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1, greater<long long>());
    priority_queue<tuple<long long, int, int>> pq;
    for (int i = 1; i <= n; i++) pq.push({a[i] + a[1], i, 1});
    for (int t = 1; t <= n; t++) {
        auto [s, i, j] = pq.top(); pq.pop();
        cout << (s + 1) / 2 << ' ';
        if (j < n) pq.push({a[i] + a[j + 1], i, j + 1});
    }
    cout << '\n';
}
