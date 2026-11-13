#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b; cin >> a >> b;            // b > 0
    cout << a / b << ' ' << a % b << '\n';    // C++: làm tròn về 0
    long long q = a / b;
    if (a % b != 0 && a < 0) q--;             // làm tròn xuống (floor)
    long long r = a - q * b;                  // dư luôn trong [0, b)
    cout << q << ' ' << r << '\n';
}
