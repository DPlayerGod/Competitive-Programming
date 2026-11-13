#include <bits/stdc++.h>
using namespace std;

long long S(long long n, long long k) {         // tổng các bội của k không vượt quá n
    long long m = n / k;
    return k * m * (m + 1) / 2;
}

int main() {
    long long n; cin >> n;
    cout << S(n, 3) + S(n, 5) - S(n, 15) << '\n';   // bội của 15 bị cộng 2 lần
}
