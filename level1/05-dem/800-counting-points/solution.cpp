#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
long long a[N];
bool luoi[N];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int t = 1; t <= k; t++) {
        int b; cin >> b;
        luoi[b] = true;
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] + k - luoi[i] << (i == n ? '\n' : ' ');
}
