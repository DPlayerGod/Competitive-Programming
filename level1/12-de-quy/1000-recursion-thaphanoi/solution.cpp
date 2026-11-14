#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int from, int to, int spare) {
    if (n == 0) return;
    hanoi(n - 1, from, spare, to);
    cout << from << ' ' << to << '\n';
    hanoi(n - 1, spare, to, from);
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    long long moves = 1;
    for (int i = 1; i <= n; i++) moves *= 2;
    cout << moves - 1 << '\n';
    hanoi(n, 1, 3, 2);
}
