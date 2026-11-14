#include <bits/stdc++.h>
using namespace std;
const int N = 300005;
pair<int, int> drum[N]; // trong luong, gia tri
long long cap[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> drum[i].first >> drum[i].second;
    for (int i = 1; i <= k; i++) cin >> cap[i];
    sort(drum + 1, drum + n + 1);
    sort(cap + 1, cap + k + 1);
    priority_queue<int> pq;
    long long ans = 0;
    int p = 1;
    for (int i = 1; i <= k; i++) {
        while (p <= n && drum[p].first <= cap[i])
            pq.push(drum[p++].second);
        if (!pq.empty()) { ans += pq.top(); pq.pop(); }
    }
    cout << ans << '\n';
}
