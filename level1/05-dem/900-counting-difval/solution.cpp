#include <bits/stdc++.h>
using namespace std;

const int OFFSET = 1000;
bool co[2 * OFFSET + 1];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        co[x + OFFSET] = true;
    }
    for (int x = OFFSET; x >= -OFFSET; x--)
        if (co[x + OFFSET]) cout << x << ' ';
    cout << '\n';
}
