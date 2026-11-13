#include <bits/stdc++.h>
using namespace std;

int a[105];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int total = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        total += a[i];
    }
    sort(a + 1, a + n + 1, greater<int>());     // lớn trước
    int mine = 0, cnt = 0;
    for (int i = 1; i <= n; i++) {
        mine += a[i]; cnt++;
        if (mine > total - mine) break;
    }
    cout << cnt << '\n';
}
