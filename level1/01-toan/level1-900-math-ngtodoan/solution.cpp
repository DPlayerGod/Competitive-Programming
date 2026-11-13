#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int a, b; cin >> a >> b;
    int cnt = 0;
    for (int x = a; x <= b; x++)
        if (isPrime(x)) cnt++;
    cout << cnt << '\n';
}
