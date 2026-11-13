#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
pair<int, int> ev[2 * N];                   // (thời điểm, +1 hoặc -1)

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int m = 0;
    for (int i = 1; i <= n; i++) {
        int a, b; cin >> a >> b;
        ev[++m] = {a, +1};
        ev[++m] = {b, -1};
    }
    sort(ev + 1, ev + m + 1);
    int cur = 0, best = 0;
    for (int i = 1; i <= m; i++) {
        cur += ev[i].second;                // số khách đang có mặt
        best = max(best, cur);
    }
    cout << best << '\n';
}
