#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
long long a[N];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    multiset<long long> w;
    int l = 1, best = 0;
    for (int r = 1; r <= n; r++) {
        w.insert(a[r]);
        while (*w.rbegin() - *w.begin() > k)     // max - min quá k: co bên trái
            w.erase(w.find(a[l++]));
        best = max(best, r - l + 1);
    }
    cout << best << '\n';
}
