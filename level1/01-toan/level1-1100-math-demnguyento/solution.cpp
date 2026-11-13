#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<char> nt(n + 1, 1);               // nt[x] = 1: x là số nguyên tố
    nt[0] = 0;
    if (n >= 1) nt[1] = 0;
    for (long long p = 2; p * p <= n; p++)
        if (nt[p])
            for (long long j = p * p; j <= n; j += p) nt[j] = 0;
    int cnt = 0;
    for (int x = 2; x <= n; x++) cnt += nt[x];
    cout << cnt << '\n';
}
