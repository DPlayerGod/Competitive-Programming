#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    long long x, y; string s; cin >> x >> y >> s;
    map<long long,int> cnt; cnt[0] = 1;
    long long p = 0, ans = 0;
    for (char c : s) {
        p += c == '0' ? y : -x; ans += cnt[p]; cnt[p]++;
    }
    cout << ans << '\n';
}
