#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
int a[N];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, l, r; cin >> n >> l >> r;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + l, a + r + 1);                 // đoạn a[l..r]
    for (int i = 1; i <= n; i++) cout << a[i] << (i == n ? '\n' : ' ');
}
