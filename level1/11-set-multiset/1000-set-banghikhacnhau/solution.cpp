#include <bits/stdc++.h>
using namespace std;

struct BanGhi {
    string ten;
    int diem;
    bool operator<(const BanGhi &o) const {
        if (diem != o.diem) return diem > o.diem;   // điểm cao đứng trước
        return ten < o.ten;                          // PHẢI so cả tên, nếu không set coi
    }                                                // hai bạn cùng điểm là "bằng nhau"
};

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    set<BanGhi> s;
    for (int i = 0; i < n; i++) {
        BanGhi b; cin >> b.ten >> b.diem;
        s.insert(b);
    }
    cout << s.size() << '\n';
    for (auto &b : s) cout << b.ten << ' ' << b.diem << '\n';
}
