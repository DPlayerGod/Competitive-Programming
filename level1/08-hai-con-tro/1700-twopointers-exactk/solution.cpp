#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

// số đoạn có KHÔNG QUÁ k giá trị khác nhau (giống bài 23)
long long atMost(int k) {
    if (k <= 0) return 0;
    map<int,int> cnt;
    int l = 0, distinct = 0;
    long long ans = 0;
    for (int r = 0; r < n; r++) {
        if (cnt[a[r]]++ == 0) distinct++;
        while (distinct > k)
            if (--cnt[a[l++]] == 0) distinct--;
        ans += r - l + 1;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int k; cin >> n >> k;
    a.resize(n);
    for (int &x : a) cin >> x;
    cout << atMost(k) - atMost(k - 1) << '\n';   // đúng k = (<= k) - (<= k - 1)
}
