#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<long long,long long>> t(n);   // (b, a): sắp theo giá KHÔNG đặt trước
    for (auto &x : t) cin >> x.second >> x.first;
    sort(t.begin(), t.end());
    vector<long long> S(n + 1, 0), pre(n + 1, LLONG_MAX), suf(n + 1, LLONG_MAX);
    for (int i = 0; i < n; i++) {
        S[i + 1] = S[i] + t[i].first;                              // tổng i+1 giá b nhỏ nhất
        pre[i + 1] = min(pre[i], t[i].second - t[i].first);        // min (a - b) trong i+1 bàn đầu
    }
    for (int i = n - 1; i >= 0; i--) suf[i] = min(suf[i + 1], t[i].second);   // min a từ bàn i trở đi
    for (int k = 1; k <= n; k++) {
        long long A = S[k] + pre[k];          // bàn đặt trước nằm trong k bàn rẻ nhất
        long long B = S[k - 1] + suf[k - 1];  // bàn đặt trước nằm ngoài k - 1 bàn rẻ nhất
        cout << min(A, B) << '\n';
    }
}
