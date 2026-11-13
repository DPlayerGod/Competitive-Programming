#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    map<int, int> hang, cot;
    map<pair<int, int>, int> o;                  // khóa là pair (x, y)
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        ans += hang[x] + cot[y] - o[{x, y}];     // cùng ô đã tính 2 lần, trừ 1 lần
        hang[x]++;
        cot[y]++;
        o[{x, y}]++;
    }
    cout << ans << '\n';
}
