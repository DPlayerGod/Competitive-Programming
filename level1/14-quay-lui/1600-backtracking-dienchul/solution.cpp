#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> g;

bool freeCell(int r, int c) { return r >= 0 && r < n && c >= 0 && c < m && g[r][c] == '.'; }
void setCells(int r1, int c1, int r2, int c2, int r3, int c3, char ch) { g[r1][c1] = g[r2][c2] = g[r3][c3] = ch; }

// The first empty cell (row-major) must be the top cell of its shape: only two choices.
bool solve() {
    int r = -1, c = -1;
    for (int i = 0; i < n && r < 0; i++)
        for (int j = 0; j < m; j++)
            if (g[i][j] == '.') {
                r = i;
                c = j;
                break;
            }
    if (r < 0) return true;
    if (freeCell(r + 1, c) && freeCell(r + 1, c + 1)) {  // shape 1:  *
        setCells(r, c, r + 1, c, r + 1, c + 1, '*');      //           **
        if (solve()) return true;
        setCells(r, c, r + 1, c, r + 1, c + 1, '.');
    }
    if (freeCell(r + 1, c - 1) && freeCell(r + 1, c)) {  // shape 2:   *
        setCells(r, c, r + 1, c - 1, r + 1, c, '*');      //           **
        if (solve()) return true;
        setCells(r, c, r + 1, c - 1, r + 1, c, '.');
    }
    return false;
}

void solveCase() {
    cin >> n >> m;
    g.resize(n);
    int empty = 0;
    for (auto& row : g) {
        cin >> row;
        for (char ch : row) if (ch == '.') empty++;
    }
    if (empty % 3 != 0) {
        cout << "NO\n";
        return;
    }
    cout << (solve() ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases = 1;
    while (test_cases--) {
        solveCase();
    }
    return 0;
}
