#include <bits/stdc++.h>
using namespace std;

long long gcdTay(long long a, long long b) {   // thuật toán Euclid
    while (b != 0) { long long r = a % b; a = b; b = r; }
    return a;
}

int main() {
    long long a, b; cin >> a >> b;
    long long g = gcdTay(a, b);                // hoặc __gcd(a, b), gcd(a, b) (C++17)
    cout << g << ' ' << a / g * b << '\n';     // chia trước rồi nhân: tránh tràn số
}
