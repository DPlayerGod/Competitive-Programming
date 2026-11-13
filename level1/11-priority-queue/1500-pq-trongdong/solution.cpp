#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vector<pair<int,int>> drum(n);            // (khối lượng, giá trị)
    for (auto &d : drum) cin >> d.first >> d.second;
    vector<long long> cap(k);
    for (auto &c : cap) cin >> c;
    sort(drum.begin(), drum.end());
    sort(cap.begin(), cap.end());             // voi yếu chọn trước
    priority_queue<int> pq;                   // giá trị các trống mà voi hiện tại chở được
    long long ans = 0;
    int p = 0;
    for (long long c : cap) {
        while (p < n && drum[p].first <= c) pq.push(drum[p++].second);
        if (!pq.empty()) { ans += pq.top(); pq.pop(); }
    }
    cout << ans << '\n';
}
