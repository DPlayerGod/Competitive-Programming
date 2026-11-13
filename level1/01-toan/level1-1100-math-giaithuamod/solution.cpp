#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

int main() {
    int n; cin >> n;
    long long f = 1, s = 0;
    for (long long i = 1; i <= n; i++) {
        f = f * i % MOD;                     // lấy dư sau mỗi phép nhân
        s = (s + i * i % MOD) % MOD;         // i * i <= 10^14: vừa long long
    }
    cout << f << ' ' << s << '\n';
}
