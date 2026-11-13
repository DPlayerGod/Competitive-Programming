#include <bits/stdc++.h>
using namespace std;

struct Hen {
    int t;
    string ten;
};

// Comparator cho heap: trả về true khi a ƯU TIÊN THẤP HƠN b (a nằm dưới b)
struct SomHon {
    bool operator()(const Hen &a, const Hen &b) const {
        if (a.t != b.t) return a.t > b.t;     // t lớn hơn thì ưu tiên thấp hơn -> top là t nhỏ nhất
        return a.ten > b.ten;                 // cùng t: tên nhỏ hơn lên trước
    }
};

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int q; cin >> q;
    priority_queue<Hen, vector<Hen>, SomHon> pq;
    while (q--) {
        string cmd; cin >> cmd;
        if (cmd == "add") { Hen h; cin >> h.t >> h.ten; pq.push(h); }
        else if (pq.empty()) cout << "EMPTY\n";
        else { cout << pq.top().t << ' ' << pq.top().ten << '\n'; pq.pop(); }   // next
    }
}
