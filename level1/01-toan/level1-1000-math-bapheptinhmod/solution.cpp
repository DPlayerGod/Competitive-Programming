#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, m; cin >> a >> b >> m;
    long long ra = ((a % m) + m) % m;        // đưa a về [0, m)
    long long rb = ((b % m) + m) % m;        // đưa b về [0, m)
    cout << (ra + rb) % m << '\n';
    cout << (ra - rb + m) % m << '\n';       // cộng m để không âm
    cout << ra * rb % m << '\n';             // ra, rb < 10^9: tích < 10^18
}
