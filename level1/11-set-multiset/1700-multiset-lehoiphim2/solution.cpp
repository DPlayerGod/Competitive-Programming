#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vector<pair<int,int>> mv(n);                 // (kết thúc, bắt đầu)
    for (auto &p : mv) cin >> p.second >> p.first;
    sort(mv.begin(), mv.end());
    multiset<int> freeAt;                        // thời điểm rảnh của từng người
    for (int i = 0; i < k; i++) freeAt.insert(0);
    int cnt = 0;
    for (auto &p : mv) {
        auto it = freeAt.upper_bound(p.second);  // người đầu tiên rảnh SAU giờ bắt đầu
        if (it == freeAt.begin()) continue;      // không ai kịp
        it--;                                    // người rảnh muộn nhất mà vẫn kịp
        freeAt.erase(it);
        freeAt.insert(p.first);
        cnt++;
    }
    cout << cnt << '\n';
}
