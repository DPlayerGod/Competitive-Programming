#include <bits/stdc++.h>
using namespace std;

int cnt[100005];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    int l = 0, distinct = 0, best = 0;
    for (int r = 0; r < n; r++) {
        if (cnt[a[r]]++ == 0) distinct++;
        while (distinct > 2)                       // > 2 giá trị khác nhau thì max - min >= 2
            if (--cnt[a[l++]] == 0) distinct--;
        best = max(best, r - l + 1);
    }
    cout << best << '\n';
}
