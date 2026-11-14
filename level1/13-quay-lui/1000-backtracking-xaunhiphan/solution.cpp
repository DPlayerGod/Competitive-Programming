#include <bits/stdc++.h>
using namespace std;

int n;
char a[30];
void go(int i) {
    if (i == n + 1) {
        for (int j = 1; j <= n; j++) cout << a[j];
        cout << '\n'; return;
    }
    a[i] = '0'; go(i + 1);
    if (i == 1 || a[i - 1] == '0') {
        a[i] = '1'; go(i + 1);
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n; go(1);
}
