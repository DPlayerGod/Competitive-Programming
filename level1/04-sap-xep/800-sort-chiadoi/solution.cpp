#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> s(n);
        for (int &x : s) cin >> x;
        sort(s.begin(), s.end());
        int ans = INT_MAX;
        for (int i = 1; i < n; i++)
            ans = min(ans, s[i] - s[i - 1]);
        cout << ans << '\n';
    }
}
