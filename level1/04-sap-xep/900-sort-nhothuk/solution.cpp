#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
int a[N];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    cout << a[k] << '\n';
    cout << a[(n + 1) / 2] << '\n';
}
