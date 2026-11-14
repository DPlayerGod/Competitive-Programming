#include <bits/stdc++.h>
using namespace std;

int n, k, a[25];
void go(int i, int start) {
    if (i == k + 1) {
        for (int j = 1; j <= k; j++) cout << a[j] << (j == k ? '\n' : ' ');
        return;
    }
    for (int v = start; v <= n - (k - i); v++) {
        a[i] = v;
        go(i + 1, v + 1);
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> k; go(1, 1);
}
