#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, k; cin >> a >> b >> k;
    cout << b / k - (a - 1) / k << '\n';  // (số bội <= b) - (số bội <= a - 1)
}
