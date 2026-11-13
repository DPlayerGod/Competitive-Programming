#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b; cin >> a >> b;
    reverse(a.begin(), a.end());               // đảo để cộng từ hàng đơn vị
    reverse(b.begin(), b.end());
    string res;
    int carry = 0;
    for (int i = 0; i < (int)max(a.size(), b.size()) || carry; i++) {
        int d = carry;
        if (i < (int)a.size()) d += a[i] - '0';
        if (i < (int)b.size()) d += b[i] - '0';
        res += char('0' + d % 10);
        carry = d / 10;
    }
    reverse(res.begin(), res.end());
    cout << res << '\n';
}
