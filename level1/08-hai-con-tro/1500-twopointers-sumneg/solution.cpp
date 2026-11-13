#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long x; cin >> n >> x;
    map<long long, int> cnt;       // cnt[p] = số tiền tố có tổng bằng p
    cnt[0] = 1;                    // tiền tố rỗng
    long long pre = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        long long v; cin >> v;
        pre += v;
        ans += cnt[pre - x];       // đoạn (j, i] có tổng x  <=>  pre_j = pre_i - x
        cnt[pre]++;
    }
    cout << ans << '\n';
}
