#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    bool first = true;
    for (long long p = 2; p * p <= n; p++) {
        if (n % p != 0) continue;
        int e = 0;
        while (n % p == 0) { n /= p; e++; }     // p chắc chắn là số nguyên tố
        if (!first) cout << " * ";
        cout << p;
        if (e > 1) cout << '^' << e;
        first = false;
    }
    if (n > 1) {                                 // phần còn lại > 1 là một số nguyên tố lớn
        if (!first) cout << " * ";
        cout << n;
    }
    cout << '\n';
}
