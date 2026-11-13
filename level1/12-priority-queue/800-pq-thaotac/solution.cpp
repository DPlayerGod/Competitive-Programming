#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int q; cin >> q;
    priority_queue<int> pq;                      // mặc định: top() là số LỚN nhất
    while (q--) {
        string cmd; cin >> cmd;
        if (cmd == "push") { int x; cin >> x; pq.push(x); }
        else if (cmd == "size") cout << pq.size() << '\n';
        else if (pq.empty()) cout << "EMPTY\n";  // pop / top khi rỗng
        else if (cmd == "top") cout << pq.top() << '\n';
        else pq.pop();                           // pop: bỏ số lớn nhất, không trả về giá trị
    }
}
