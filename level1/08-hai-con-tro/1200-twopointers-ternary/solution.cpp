#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size(), cnt[4] = {0, 0, 0, 0};
        int l = 0, best = INT_MAX;
        for (int r = 0; r < n; r++) {
            cnt[s[r] - '0']++;
            while (cnt[s[l] - '0'] > 1) cnt[s[l++] - '0']--;   // ký tự trái thừa: bỏ được
            if (cnt[1] && cnt[2] && cnt[3]) best = min(best, r - l + 1);
        }
        cout << (best == INT_MAX ? 0 : best) << '\n';
    }
}
