#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long h; cin >> n >> h;
    vector<long long> x1(n), x2(n);
    for (int i = 0; i < n; i++) cin >> x1[i] >> x2[i];
    int l = 0;
    long long gap = 0, best = 0;      // gap = tổng khoảng trống giữa luồng l..r (mất độ cao)
    for (int r = 0; r < n; r++) {
        if (r > 0) gap += x1[r] - x2[r - 1];
        while (gap >= h) {            // không đủ độ cao để bay qua: bỏ luồng trái
            gap -= x1[l + 1] - x2[l];
            l++;
        }
        long long flow = x2[r] - x1[l] - gap;   // tổng độ dài các luồng l..r
        best = max(best, flow + h);              // bay ngang trong luồng + rơi h đơn vị
    }
    cout << best << '\n';
}
