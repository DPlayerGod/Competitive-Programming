#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b; cin >> a >> b;
    if (b == 0) { cout << 1 << '\n'; return 0; }
    int d = a % 10;
    int e = (b - 1) % 4 + 1;                    // chữ số tận cùng lặp lại theo chu kỳ 4
    int r = 1;
    for (int i = 0; i < e; i++) r = r * d % 10;
    cout << r << '\n';
}
