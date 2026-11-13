#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long l;
    if (!(cin >> n >> l)) return 0;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    long long best2 = max(2 * a[0], 2 * (l - a[n - 1]));
    for (int i = 1; i < n; i++)
        best2 = max(best2, a[i] - a[i - 1]);
    cout << fixed << setprecision(10) << (best2 / 2.0) << '\n';
}
