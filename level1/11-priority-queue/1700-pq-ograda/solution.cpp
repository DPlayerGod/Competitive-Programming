#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
int h[N], pos[N], ans[N];
bool used[N];
array<int, 3> board[N]; // chieu cao, gia, id
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) { cin >> h[i]; pos[i] = i; }
    for (int i = 1; i <= n; i++) {
        cin >> board[i][0] >> board[i][1]; board[i][2] = i;
    }
    sort(pos + 1, pos + n + 1, [](int x, int y) {
        if (h[x] != h[y]) return h[x] > h[y];
        return x > y;
    });
    sort(board + 1, board + n + 1, greater<array<int, 3>>());
    priority_queue<pair<int, int>> pq; // gia, id
    long long profit = 0;
    int p = 1;
    for (int t = 1; t <= n; t++) {
        int i = pos[t];
        while (p <= n && board[p][0] >= h[i]) {
            pq.push({board[p][1], board[p][2]}); p++;
        }
        if (!pq.empty()) {
            ans[i] = pq.top().second; profit += pq.top().first;
            used[ans[i]] = true; pq.pop();
        }
    }
    int j = 1;
    for (int i = 1; i <= n; i++) if (!ans[i]) {
        while (used[j]) j++;
        ans[i] = j; used[j] = true;
    }
    cout << profit << '\n';
    for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
    cout << '\n';
}
