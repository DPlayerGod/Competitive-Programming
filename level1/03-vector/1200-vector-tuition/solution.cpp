#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<long long> c(n);
    for (auto &x : c) cin >> x;
    sort(c.begin(), c.end());
    long long best = 0, bestT = 0;
    for (int i = 0; i < n; i++) {
        long long rev = c[i] * (n - i);   // học phí c[i]: các bò c[i..n-1] đều đi học
        if (rev > best) { best = rev; bestT = c[i]; }   // ">" : bằng nhau giữ T nhỏ hơn
    }
    cout << best << ' ' << bestT << '\n';
}
