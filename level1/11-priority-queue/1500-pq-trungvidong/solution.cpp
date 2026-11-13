#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    priority_queue<int> lo;                                  // nửa nhỏ: heap MAX
    priority_queue<int, vector<int>, greater<int>> hi;       // nửa lớn: heap MIN
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (lo.empty() || x <= lo.top()) lo.push(x); else hi.push(x);
        // cân bằng: lo có bằng hi hoặc nhiều hơn đúng 1 phần tử
        if (lo.size() > hi.size() + 1) { hi.push(lo.top()); lo.pop(); }
        if (hi.size() > lo.size())     { lo.push(hi.top()); hi.pop(); }
        cout << lo.top() << ' ';                             // trung vị = đỉnh nửa nhỏ
    }
    cout << '\n';
}
