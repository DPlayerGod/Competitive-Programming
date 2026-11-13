#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    long long cnt = 0, sum = 0;
    for (long long i = 1; i * i <= n; i++)
        if (n % i == 0) {
            cnt++; sum += i;
            if (i != n / i) { cnt++; sum += n / i; }
        }
    long long proper = sum - n;                 // tổng ước thực sự (không tính n)
    cout << cnt << ' ' << sum << ' ';
    if (proper == n) cout << "HOAN HAO\n";
    else if (proper > n) cout << "DU\n";
    else cout << "THIEU\n";
}
