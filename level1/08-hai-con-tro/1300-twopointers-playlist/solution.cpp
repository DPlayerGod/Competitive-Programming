#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    map<int,int> cnt;                    // số lần xuất hiện trong cửa sổ a[l..r]
    int l = 0, best = 0;
    for (int r = 0; r < n; r++) {
        cnt[a[r]]++;
        while (cnt[a[r]] > 1) cnt[a[l++]]--;   // bị lặp: bỏ bên trái tới khi hết lặp
        best = max(best, r - l + 1);
    }
    cout << best << '\n';
}
