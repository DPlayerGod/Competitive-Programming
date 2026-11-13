#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<array<int,3>> c(n);                   // (đến, đi, chỉ số)
    for (int i = 0; i < n; i++) { cin >> c[i][0] >> c[i][1]; c[i][2] = i; }
    sort(c.begin(), c.end());
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;   // (ngày đi, phòng)
    vector<int> room(n);
    int rooms = 0;
    for (auto &x : c) {
        if (!pq.empty() && pq.top().first < x[0]) {   // phòng trả sớm nhất đã trống
            room[x[2]] = pq.top().second; pq.pop();
        } else room[x[2]] = ++rooms;                  // mở phòng mới
        pq.push({x[1], room[x[2]]});
    }
    cout << rooms << '\n';
    for (int r : room) cout << r << ' ';
    cout << '\n';
}
