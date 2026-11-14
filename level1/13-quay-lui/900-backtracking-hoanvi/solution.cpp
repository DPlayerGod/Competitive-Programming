#include <bits/stdc++.h>
using namespace std;

int n, a[10];
bool used[10];
void go(int i) {
    if (i == n + 1) {
        for (int j = 1; j <= n; j++) cout << a[j] << (j == n ? '\n' : ' ');
        return;
    }
    for (int v = 1; v <= n; v++) if (!used[v]) {
        a[i] = v; used[v] = true;
        go(i + 1);
        used[v] = false;
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n; go(1);
}
