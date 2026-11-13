#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long x; cin >> n >> x;
    vector<pair<long long,int>> a(n);
    for (int i = 0; i < n; i++) { cin >> a[i].first; a[i].second = i + 1; }
    sort(a.begin(), a.end());
    for (int k = 0; k < n; k++) {              // cố định phần tử nhỏ nhất a[k]
        int i = k + 1, j = n - 1;
        while (i < j) {
            long long s = a[k].first + a[i].first + a[j].first;
            if (s == x) {
                int p[3] = {a[k].second, a[i].second, a[j].second};
                sort(p, p + 3);
                cout << p[0] << ' ' << p[1] << ' ' << p[2] << '\n';
                return 0;
            }
            if (s < x) i++; else j--;
        }
    }
    cout << "IMPOSSIBLE\n";
}
