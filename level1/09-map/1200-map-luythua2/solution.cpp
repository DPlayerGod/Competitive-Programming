#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    map<long long, int> seen;                    // các số đứng trước
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        long long x; cin >> x;
        for (int p = 1; p <= 30; p++) {          // tong dich tu 2 den 2^30
            auto it = seen.find((1LL << p) - x);
            if (it != seen.end()) ans += it->second;
        }
        seen[x]++;
    }
    cout << ans << '\n';
}
