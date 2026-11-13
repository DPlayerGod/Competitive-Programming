#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; int b;
    cin >> n >> b;
    if (n == 0) { cout << 0 << '\n'; return 0; }
    string digits = "0123456789ABCDEF";
    string res;
    while (n > 0) {
        res += digits[n % b];          // chữ số giá trị 10..15 là A..F
        n /= b;
    }
    reverse(res.begin(), res.end());
    cout << res << '\n';
}
