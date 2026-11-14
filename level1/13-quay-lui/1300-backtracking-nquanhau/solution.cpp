#include <bits/stdc++.h>
using namespace std;

int n;
bool col[15], d1[30], d2[30];
long long ans;
void go(int r) {
    if (r == n + 1) { ans++; return; }
    for (int c = 1; c <= n; c++) {
        int x = r - c + n, y = r + c;
        if (col[c] || d1[x] || d2[y]) continue;
        col[c] = d1[x] = d2[y] = true;
        go(r + 1);
        col[c] = d1[x] = d2[y] = false;
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n; go(1); cout << ans << '\n';
}
