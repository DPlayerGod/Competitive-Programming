#include <bits/stdc++.h>
using namespace std;

int n;
long long cnt = 0;
bool col[15], d1[30], d2[30];  // d1: r + c, d2: r - c + n - 1

// One queen per row; a cell is free iff its column and both diagonals are free.
void place(int r) {
    if (r == n) {
        cnt++;
        return;
    }
    for (int c = 0; c < n; c++) {
        if (col[c] || d1[r + c] || d2[r - c + n - 1]) continue;
        col[c] = d1[r + c] = d2[r - c + n - 1] = true;
        place(r + 1);
        col[c] = d1[r + c] = d2[r - c + n - 1] = false;
    }
}

void solve() {
    cin >> n;
    place(0);
    cout << cnt << "\n";
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
