#include <bits/stdc++.h>
using namespace std;

struct Point {
    long long x, y;
    long long d() const { return x * x + y * y; }
    bool operator<(const Point &o) const {     // dùng cho sort
        if (d() != o.d()) return d() < o.d();
        if (x != o.x) return x < o.x;
        return y < o.y;
    }
    bool operator==(const Point &o) const {    // dùng cho unique
        return x == o.x && y == o.y;
    }
};

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<Point> p(n);
    for (auto &q : p) cin >> q.x >> q.y;
    sort(p.begin(), p.end());                       // điểm trùng nhau đứng cạnh nhau
    p.erase(unique(p.begin(), p.end()), p.end());   // unique so sánh bằng operator==
    cout << p.size() << '\n';
    for (auto &q : p) cout << q.x << ' ' << q.y << '\n';
}
