#include <bits/stdc++.h>
using namespace std;

const int N = 10000000;
int spf[N + 1];                 // spf[x] = ước nguyên tố nhỏ nhất của x

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    for (int p = 2; p <= N; p++)
        if (spf[p] == 0) {                  // p chưa bị ai gạch: p nguyên tố
            spf[p] = p;
            for (long long j = (long long)p * p; j <= N; j += p)
                if (spf[j] == 0) spf[j] = p;
        }
    int q; cin >> q;
    while (q--) {
        int x; cin >> x;
        bool first = true;
        while (x > 1) {
            int p = spf[x], e = 0;
            while (x % p == 0) { x /= p; e++; }
            if (!first) cout << " * ";
            cout << p;
            if (e > 1) cout << '^' << e;
            first = false;
        }
        cout << '\n';
    }
}
