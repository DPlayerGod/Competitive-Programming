#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    long long sum = 0;
    for (int i = 0; i < k; i++) sum += a[i];   // cửa sổ đầu tiên a[0..k-1]
    long long best = sum;
    for (int r = k; r < n; r++) {
        sum += a[r] - a[r - k];                // thêm phần tử mới, bỏ phần tử cũ nhất
        best = max(best, sum);
    }
    cout << best << '\n';
}
