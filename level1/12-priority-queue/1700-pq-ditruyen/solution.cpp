#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    sort(a.rbegin(), a.rend());               // giảm dần
    priority_queue<tuple<long long,int,int>> pq;   // heap MAX (tổng, i, j)
    for (int i = 0; i < n; i++) pq.push({a[i] + a[0], i, 0});
    for (int t = 0; t < n; t++) {
        auto [s, i, j] = pq.top(); pq.pop();
        cout << (s + 1) / 2 << ' ';           // làm tròn lên của s / 2
        if (j + 1 < n) pq.push({a[i] + a[j + 1], i, j + 1});
    }
    cout << '\n';
}
