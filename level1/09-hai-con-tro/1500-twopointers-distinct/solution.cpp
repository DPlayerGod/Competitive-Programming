#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    map<int,int> cnt;
    int l = 0, distinct = 0;
    long long ans = 0;
    for (int r = 0; r < n; r++) {
        if (cnt[a[r]]++ == 0) distinct++;
        while (distinct > k)
            if (--cnt[a[l++]] == 0) distinct--;
        ans += r - l + 1;            // mọi đoạn kết thúc tại r, bắt đầu từ l..r
    }
    cout << ans << '\n';
}
