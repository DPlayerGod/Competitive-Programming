#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    vector<long long> small, big;
    for (long long i = 1; i * i <= n; i++)    // chỉ duyệt tới căn n
        if (n % i == 0) {
            small.push_back(i);
            if (i != n / i) big.push_back(n / i);   // i * i = n: không in 2 lần
        }
    reverse(big.begin(), big.end());
    for (long long x : small) cout << x << ' ';
    for (long long x : big) cout << x << ' ';
    cout << '\n';
}
