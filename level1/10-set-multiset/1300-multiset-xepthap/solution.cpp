#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    multiset<int> tops;                          // khối trên cùng của mỗi tháp
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        auto it = tops.upper_bound(k);           // tháp có đỉnh nhỏ nhất mà > k
        if (it != tops.end()) tops.erase(it);    // đặt k lên tháp đó
        tops.insert(k);                          // đỉnh mới là k (hoặc tháp mới)
    }
    cout << tops.size() << '\n';
}
