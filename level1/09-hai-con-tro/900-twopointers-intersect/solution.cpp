#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    vector<int> c;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) { c.push_back(a[i]); i++; j++; }   // chung: lấy, cả hai cùng tiến
        else if (a[i] < b[j]) i++;                            // a[i] quá nhỏ, không thể gặp b nào nữa
        else j++;
    }
    cout << c.size() << '\n';
    for (int x : c) cout << x << ' ';
    cout << '\n';
}
