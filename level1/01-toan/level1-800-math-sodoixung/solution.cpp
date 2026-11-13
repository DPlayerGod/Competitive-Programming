#include <bits/stdc++.h>
using namespace std;

bool isPal(int x) {
    int rev = 0, t = x;
    while (t > 0) { rev = rev * 10 + t % 10; t /= 10; }
    return rev == x;
}

int main() {
    int n; cin >> n;
    int cnt = 0;
    for (int x = 1; x <= n; x++)
        if (isPal(x)) cnt++;
    cout << cnt << '\n';
}
