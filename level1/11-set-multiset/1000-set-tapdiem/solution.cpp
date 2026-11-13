#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
    bool operator<(const Point &o) const {     // set cần operator<: x trước, rồi y
        if (x != o.x) return x < o.x;
        return y < o.y;
    }
};

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int q; cin >> q;
    set<Point> s;
    while (q--) {
        string cmd; cin >> cmd;
        if (cmd == "add") { int x, y; cin >> x >> y; s.insert({x, y}); }
        else if (cmd == "del") { int x, y; cin >> x >> y; s.erase({x, y}); }
        else if (cmd == "has") { int x, y; cin >> x >> y; cout << (s.count({x, y}) ? "YES" : "NO") << '\n'; }
        else if (cmd == "size") cout << s.size() << '\n';
        else if (cmd == "right") {
            int x; cin >> x;
            auto it = s.lower_bound({x, INT_MIN});     // điểm đầu tiên có hoành độ >= x
            if (it == s.end()) cout << "NONE\n";
            else cout << it->x << ' ' << it->y << '\n';
        }
        else if (s.empty()) cout << "EMPTY\n";
        else if (cmd == "first") cout << s.begin()->x << ' ' << s.begin()->y << '\n';
        else cout << s.rbegin()->x << ' ' << s.rbegin()->y << '\n';   // last
    }
}
