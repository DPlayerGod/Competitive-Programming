#include <bits/stdc++.h>
using namespace std;

int n;
string s;

// (open, close) is enough to know whether the prefix can still be completed.
void gen(int open, int close) {
    if ((int)s.size() == 2 * n) {
        cout << s << "\n";
        return;
    }
    if (open < n) {
        s.push_back('(');
        gen(open + 1, close);
        s.pop_back();
    }
    if (close < open) {
        s.push_back(')');
        gen(open, close + 1);
        s.pop_back();
    }
}

void solve() {
    cin >> n;
    gen(0, 0);
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
