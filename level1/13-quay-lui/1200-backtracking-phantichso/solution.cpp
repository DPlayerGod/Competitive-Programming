#include <bits/stdc++.h>
using namespace std;

int n, a[35];
void go(int i, int rem, int low) {
    if (rem == 0) {
        for (int j = 1; j < i; j++) cout << a[j] << (j == i - 1 ? '\n' : ' ');
        return;
    }
    for (int v = low; v <= rem; v++) {
        a[i] = v; go(i + 1, rem - v, v);
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n; go(1, n, 1);
}
