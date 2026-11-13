#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a; cin >> n >> m >> a;
    long long x = (n + a - 1) / a;              // làm tròn lên của n / a, không dùng số thực
    long long y = (m + a - 1) / a;
    cout << x * y << '\n';
}
