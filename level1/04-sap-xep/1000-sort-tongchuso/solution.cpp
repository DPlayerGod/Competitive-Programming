#include <bits/stdc++.h>
using namespace std;

int digitSum(int x) {
    int s = 0;
    while (x > 0) { s += x % 10; x /= 10; }
    return s;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<pair<int,int>> v(n);
    for (auto &p : v) {
        cin >> p.second;
        p.first = digitSum(p.second);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << ' ';
        cout << v[i].second;
    }
    cout << '\n';
}
