#include <bits/stdc++.h>
using namespace std;
const int N = 500005;
pair<long long, long long> t[N]; // b, a
long long S[N], pre[N], suf[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> t[i].second >> t[i].first;
    sort(t + 1, t + n + 1);
    pre[0] = suf[n + 1] = LLONG_MAX;
    for (int i = 1; i <= n; i++) {
        S[i] = S[i - 1] + t[i].first;
        pre[i] = min(pre[i - 1], t[i].second - t[i].first);
    }
    for (int i = n; i >= 1; i--)
        suf[i] = min(suf[i + 1], t[i].second);
    for (int k = 1; k <= n; k++)
        cout << min(S[k] + pre[k], S[k - 1] + suf[k]) << '\n';
}
