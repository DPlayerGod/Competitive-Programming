#include <bits/stdc++.h>
using namespace std;

int main() {
    string a; long long k;
    cin >> a >> k;
    if (k == 0 || a == "0") { cout << 0 << '\n'; return 0; }
    string res;
    long long carry = 0;
    for (int i = (int)a.size() - 1; i >= 0; i--) {
        long long d = (a[i] - '0') * k + carry;   // tới 9 * 10^9: long long
        res += char('0' + d % 10);
        carry = d / 10;
    }
    while (carry) { res += char('0' + carry % 10); carry /= 10; }
    reverse(res.begin(), res.end());
    cout << res << '\n';
}
