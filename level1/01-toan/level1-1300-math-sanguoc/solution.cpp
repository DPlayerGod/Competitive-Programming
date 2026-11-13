#include <bits/stdc++.h>
using namespace std;

const int N = 1000000;
int cnt[N + 1], sum_[N + 1];                // tổng ước của x <= 10^6 nhỏ hơn 5 * 10^6

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    for (int d = 1; d <= N; d++)
        for (int j = d; j <= N; j += d) {   // d là ước của mọi bội j
            cnt[j]++;
            sum_[j] += d;
        }
    int q; cin >> q;
    while (q--) {
        int x; cin >> x;
        cout << cnt[x] << ' ' << sum_[x] << '\n';
    }
}
