#include <bits/stdc++.h>
using namespace std;

int cnt[200005];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; cin >> s; int n = s.size(), p = 0; cnt[n] = 1;
    long long ans = 0;
    for (char c : s) {
        p += c == '1' ? 1 : -1;
        ans += cnt[p+n]; cnt[p+n]++;
    }
    cout << ans << '\n';
}
