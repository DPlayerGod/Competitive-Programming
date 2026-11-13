#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<long long> p(n);
    for (auto &x : p) cin >> x;
    sort(p.begin(), p.end());
    long long m = p[n / 2];
    long long cost = 0;
    for (long long x : p) cost += abs(x - m);
    cout << cost << '\n';
}
