#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b; cin >> a >> b;              // b != 0
    if (a == 0) { cout << "0/1\n"; return 0; }
    long long g = gcd(llabs(a), llabs(b));
    a /= g; b /= g;
    if (b < 0) { a = -a; b = -b; }              // dấu âm luôn đặt ở tử
    cout << a << '/' << b << '\n';
}
