#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<long long> a(n), b(n), c(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    for (int i = 0; i < n; i++) c[i] = a[i] - b[i];   // a_i + a_j > b_i + b_j  <=>  c_i + c_j > 0
    sort(c.begin(), c.end());
    long long cnt = 0;
    int i = 0, j = n - 1;
    while (i < j) {
        if (c[i] + c[j] > 0) {
            cnt += j - i;   // c[j] ghép được với mọi c[i..j-1]
            j--;
        } else i++;
    }
    cout << cnt << '\n';
}
