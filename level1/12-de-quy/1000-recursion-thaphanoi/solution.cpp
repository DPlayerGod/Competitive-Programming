#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> moves;

// Move n disks from peg `from` to peg `to`, using `mid` as the spare peg.
void hanoi(int n, int from, int to, int mid) {
    if (n == 0) return;
    hanoi(n - 1, from, mid, to);
    moves.push_back({from, to});
    hanoi(n - 1, mid, to, from);
}

void solve() {
    int n;
    cin >> n;
    hanoi(n, 1, 3, 2);
    cout << moves.size() << "\n";
    for (auto [x, y] : moves) cout << x << " " << y << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases = 1;
    while (test_cases--) {
        solve();
    }
    return 0;
}
