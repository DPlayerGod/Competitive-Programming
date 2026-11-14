#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
array<int, 3> c[N];  // den, di, id
int room[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> c[i][0] >> c[i][1]; c[i][2] = i;
    }
    sort(c + 1, c + n + 1);
    using P = pair<int, int>;
    priority_queue<P, vector<P>, greater<P>> pq;
    int rooms = 0;
    for (int i = 1; i <= n; i++) {
        int id = c[i][2];
        if (!pq.empty() && pq.top().first < c[i][0]) {
            room[id] = pq.top().second; pq.pop();
        } else room[id] = ++rooms;
        pq.push({c[i][1], room[id]});
    }
    cout << rooms << '\n';
    for (int i = 1; i <= n; i++) cout << room[i] << ' ';
    cout << '\n';
}
