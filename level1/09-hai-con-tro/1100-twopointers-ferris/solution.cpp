#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long x; cin >> n >> x;
    vector<long long> p(n);
    for (auto &v : p) cin >> v;
    sort(p.begin(), p.end());
    int i = 0, j = n - 1, cnt = 0;
    while (i <= j) {
        if (i < j && p[i] + p[j] <= x) i++;   // người nhẹ nhất đi cùng người nặng nhất
        j--;                                   // người nặng nhất luôn lên một cabin
        cnt++;
    }
    cout << cnt << '\n';
}
