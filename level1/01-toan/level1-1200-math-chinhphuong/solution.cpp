#include <bits/stdc++.h>
using namespace std;

bool isSquare(long long n) {
    long long r = sqrtl(n);                     // có thể lệch 1 do sai số số thực
    while (r * r > n) r--;
    while ((r + 1) * (r + 1) <= n) r++;
    return r * r == n;
}

int main() {
    int q; cin >> q;
    while (q--) {
        long long n; cin >> n;
        cout << (isSquare(n) ? "YES" : "NO") << '\n';
    }
}
