#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<pair<int,int>> v(n);
    for (auto &p : v) cin >> p.first >> p.second;
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++) {
        if (v[i].second < v[i - 1].second) {
            cout << "Happy Alex\n";
            return 0;
        }
    }
    cout << "Poor Alex\n";
}
