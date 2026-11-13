#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int m, n, k; cin >> m >> n >> k;
    vector<long long> a(m), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    // heap min các "ứng viên" (tổng, i, j); mỗi hàng i chỉ có một ứng viên tại mỗi lúc
    priority_queue<tuple<long long,int,int>, vector<tuple<long long,int,int>>, greater<>> pq;
    for (int i = 0; i < min(m, k); i++) pq.push({a[i] + b[0], i, 0});
    while (k-- && !pq.empty()) {
        auto [s, i, j] = pq.top(); pq.pop();
        cout << s << '\n';
        if (j + 1 < n) pq.push({a[i] + b[j + 1], i, j + 1});   // ứng viên kế tiếp của hàng i
    }
}
