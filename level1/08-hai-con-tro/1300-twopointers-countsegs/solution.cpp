#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long S; cin >> n >> S;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    int l = 0;
    long long sum = 0, cnt = 0;
    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum > S) sum -= a[l++];
        cnt += r - l + 1;          // các đoạn [l..r], [l+1..r], ..., [r..r] đều có tổng <= S
    }
    cout << cnt << '\n';
}
