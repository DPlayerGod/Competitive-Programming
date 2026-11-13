#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long L = 1;
    for (int i = 2; i <= n; i++)
        L = L / gcd(L, (long long)i) * i;       // lcm(L, i), chia trước để không tràn
    cout << L << '\n';
}
