#include <bits/stdc++.h>
using namespace std;

int n, a[200005];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    // 1) Kiểm tra đối xứng: so cặp (1, n), (2, n-1), ...
    bool pal = true;
    for (int i = 1, j = n; i < j; i++, j--)
        if (a[i] != a[j]) pal = false;
    cout << (pal ? "YES" : "NO") << '\n';

    // 2) Đảo ngược tại chỗ: đổi chỗ cặp (i, j) rồi tiến cả hai vào giữa
    for (int i = 1, j = n; i < j; i++, j--) swap(a[i], a[j]);
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    cout << '\n';
}
