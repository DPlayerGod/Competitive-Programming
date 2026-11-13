#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long X; cin >> n >> X;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    long long cnt = 0;
    int i = 0, j = n - 1;
    while (i < j) {
        if (a[i] + a[j] <= X) {
            cnt += j - i;   // a[i] ghép được với mọi a[i+1..j]
            i++;
        } else j--;         // a[j] quá lớn, không ghép được với ai còn lại
    }
    cout << cnt << '\n';
}
