#include <bits/stdc++.h>
using namespace std;

struct ThiSinh {
    string ten;
    int toan, ly, hoa;
    int tong() const { return toan + ly + hoa; }   // hàm thành viên
};

bool cmp(const ThiSinh &a, const ThiSinh &b) {
    if (a.tong() != b.tong()) return a.tong() > b.tong();
    if (a.toan != b.toan) return a.toan > b.toan;
    return a.ten < b.ten;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<ThiSinh> ts(n);
    for (auto &t : ts) cin >> t.ten >> t.toan >> t.ly >> t.hoa;
    sort(ts.begin(), ts.end(), cmp);
    int hang = 0;
    for (int i = 0; i < n; i++) {
        // khác người trước ở tổng hoặc điểm toán thì hạng = vị trí; ngược lại giữ hạng cũ
        if (i == 0 || ts[i].tong() != ts[i - 1].tong() || ts[i].toan != ts[i - 1].toan) hang = i + 1;
        cout << hang << ' ' << ts[i].ten << ' ' << ts[i].tong() << '\n';
    }
}
