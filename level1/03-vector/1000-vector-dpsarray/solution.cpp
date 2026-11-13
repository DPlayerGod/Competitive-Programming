#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    vector<long long> pre = {0};          // pre[i] = tổng i phần tử đầu; pre[0] = 0
    for (int i = 0; i < n; i++) {
        long long x; cin >> x;
        pre.push_back(pre.back() + x);
    }
    while (q--) {
        int t; cin >> t;
        if (t == 1) { long long x; cin >> x; pre.push_back(pre.back() + x); }   // thêm cuối: thêm 1 tiền tố
        else if (t == 2) pre.pop_back();                                         // xóa cuối: bỏ 1 tiền tố
        else { int l, r; cin >> l >> r; cout << pre[r] - pre[l - 1] << '\n'; }
    }
}
