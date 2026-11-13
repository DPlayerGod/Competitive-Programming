#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int,int>> job(n);             // (hạn d, thời gian p)
    for (auto &j : job) cin >> j.second;
    for (auto &j : job) cin >> j.first;
    sort(job.begin(), job.end());             // làm theo hạn sớm trước
    priority_queue<int> pq;                   // thời gian các việc đúng hạn đang giữ (heap MAX)
    long long t = 0;
    for (auto &j : job) {
        pq.push(j.second); t += j.second;
        if (t > j.first) { t -= pq.top(); pq.pop(); }   // trễ: bỏ việc DÀI nhất
    }
    cout << n - (int)pq.size() << '\n';
}
