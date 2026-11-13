#include <bits/stdc++.h>
using namespace std;

struct Point {
    long long x, y;
    long long d() const { return x * x + y * y; }
    bool operator<(const Point &o) const {     // giống hệt bài 5: viết một lần, dùng lại
        if (d() != o.d()) return d() < o.d();
        if (x != o.x) return x < o.x;
        return y < o.y;
    }
};

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    vector<Point> p(n);
    for (auto &q : p) cin >> q.x >> q.y;
    sort(p.begin(), p.end());
    for (int i = 0; i < k; i++) cout << p[i].x << ' ' << p[i].y << '\n';
}
