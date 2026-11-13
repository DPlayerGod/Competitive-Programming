#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long x; cin >> n >> x;
    vector<pair<long long,int>> a(n);           // (giá trị, vị trí ban đầu)
    for (int i = 0; i < n; i++) { cin >> a[i].first; a[i].second = i + 1; }
    sort(a.begin(), a.end());
    int i = 0, j = n - 1;
    while (i < j) {
        long long s = a[i].first + a[j].first;
        if (s == x) {
            cout << min(a[i].second, a[j].second) << ' ' << max(a[i].second, a[j].second) << '\n';
            return 0;
        }
        if (s < x) i++;    // cần tổng lớn hơn
        else j--;          // cần tổng nhỏ hơn
    }
    cout << "IMPOSSIBLE\n";
}
