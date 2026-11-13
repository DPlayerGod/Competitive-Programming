#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> h(n);
    for (int &x : h) cin >> x;
    vector<array<int,3>> board(n);            // (độ cao, giá, chỉ số)
    for (int i = 0; i < n; i++) { cin >> board[i][0] >> board[i][1]; board[i][2] = i + 1; }
    vector<int> pos(n);                       // các tấm của Slavko: cao trước, cùng cao thì vị trí sau trước
    iota(pos.begin(), pos.end(), 0);
    sort(pos.begin(), pos.end(), [&](int x, int y) {
        if (h[x] != h[y]) return h[x] > h[y];
        return x > y;
    });
    sort(board.rbegin(), board.rend());       // tấm của Lea: cao trước
    priority_queue<pair<int,int>> pq;         // (giá, chỉ số) các tấm đủ cao cho vị trí hiện tại
    vector<int> ans(n, 0), used(n + 1, 0);
    long long profit = 0;
    int p = 0;
    for (int i : pos) {
        while (p < n && board[p][0] >= h[i]) { pq.push({board[p][1], board[p][2]}); p++; }
        if (!pq.empty()) {
            ans[i] = pq.top().second; profit += pq.top().first;
            used[ans[i]] = 1; pq.pop();
        }
    }
    int j = 1;                                // các vị trí chưa có tấm: lấp bằng tấm thừa
    for (int i = 0; i < n; i++)
        if (!ans[i]) { while (used[j]) j++; ans[i] = j; used[j] = 1; }
    cout << profit << '\n';
    for (int x : ans) cout << x << ' ';
    cout << '\n';
}
