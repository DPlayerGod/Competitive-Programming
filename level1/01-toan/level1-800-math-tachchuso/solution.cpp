#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    if (n == 0) { cout << "1 0 0\n"; return 0; }   // số 0 có 1 chữ số
    int cnt = 0; long long sum = 0, rev = 0;
    while (n > 0) {
        int d = n % 10;              // chữ số hàng đơn vị
        cnt++; sum += d;
        rev = rev * 10 + d;          // ghép chữ số vào cuối số đảo
        n /= 10;                     // bỏ chữ số hàng đơn vị
    }
    cout << cnt << ' ' << sum << ' ' << rev << '\n';
}
