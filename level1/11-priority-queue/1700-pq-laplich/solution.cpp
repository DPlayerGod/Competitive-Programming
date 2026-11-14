#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
pair<int, int> job[N]; // han d, thoi gian p
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> job[i].second;
    for (int i = 1; i <= n; i++) cin >> job[i].first;
    sort(job + 1, job + n + 1);
    priority_queue<int> pq;
    long long t = 0;
    for (int i = 1; i <= n; i++) {
        pq.push(job[i].second); t += job[i].second;
        if (t > job[i].first) { t -= pq.top(); pq.pop(); }
    }
    cout << n - (int)pq.size() << '\n';
}
