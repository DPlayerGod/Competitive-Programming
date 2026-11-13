#include <bits/stdc++.h>
using namespace std;

struct BenhNhan {
    int muc, id;                               // mức độ nặng, số thứ tự đến
    string ten;
    // top() của priority_queue là phần tử "lớn nhất" theo operator<
    bool operator<(const BenhNhan &o) const {
        if (muc != o.muc) return muc < o.muc;  // nặng hơn thì "lớn hơn" -> khám trước
        return id > o.id;                      // cùng mức: đến SỚM hơn thì "lớn hơn"
    }
};

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int q; cin >> q;
    priority_queue<BenhNhan> pq;
    int cnt = 0;
    while (q--) {
        string cmd; cin >> cmd;
        if (cmd == "come") {
            BenhNhan b; cin >> b.ten >> b.muc;
            b.id = cnt++;
            pq.push(b);
        } else if (pq.empty()) cout << "EMPTY\n";
        else { cout << pq.top().ten << '\n'; pq.pop(); }
    }
}
