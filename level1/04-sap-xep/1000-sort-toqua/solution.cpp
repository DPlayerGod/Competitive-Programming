#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long m;
    cin >> n >> m;
    vector<long long> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    // tổ i cần ném b_i - a_i đồng, nhận lại b_i đồng: lời a_i >= 0
    vector<pair<long long,long long>> p(n);
    for (int i = 0; i < n; i++) p[i] = {b[i] - a[i], a[i]};
    sort(p.begin(), p.end());
    for (auto &e : p) {
        if (m < e.first) break;
        m += e.second;
    }
    cout << m << '\n';
}
