#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long t; cin >> n >> t;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    int l = 0, best = 0;
    long long sum = 0;                 // tổng đoạn a[l..r]
    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum > t) sum -= a[l++]; // quá giờ: bỏ bớt sách bên trái
        best = max(best, r - l + 1);
    }
    cout << best << '\n';
}
