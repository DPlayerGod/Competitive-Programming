#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    priority_queue<long long, vector<long long>, greater<long long>> pq;   // heap MIN
    long long sum = 0;                           // tổng các số đang trong heap
    for (int i = 0; i < n; i++) {
        long long x; cin >> x;
        pq.push(x); sum += x;
        if ((int)pq.size() > k) { sum -= pq.top(); pq.pop(); }   // bỏ số nhỏ nhất
        cout << sum << '\n';
    }
}
