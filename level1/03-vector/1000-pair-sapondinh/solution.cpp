#include <bits/stdc++.h>
using namespace std;

struct HocSinh {
    string ten;
    int diem;
};

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<HocSinh> hs(n);
    for (auto &h : hs) cin >> h.ten >> h.diem;
    // stable_sort: các bạn cùng điểm giữ nguyên thứ tự nhập
    stable_sort(hs.begin(), hs.end(), [](const HocSinh &a, const HocSinh &b) {
        return a.diem > b.diem;
    });
    for (auto &h : hs) cout << h.ten << ' ' << h.diem << '\n';
}
