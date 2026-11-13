#include <bits/stdc++.h>
using namespace std;

vector<int> cur;

// State (rem, minv): rem is still to be split, the next part must be >= minv.
void part(int rem, int minv) {
    if (rem == 0) {
        for (int j = 0; j < (int)cur.size(); j++) cout << cur[j] << (j + 1 == (int)cur.size() ? '\n' : ' ');
        return;
    }
    for (int v = minv; v <= rem; v++) {
        cur.push_back(v);
        part(rem - v, v);
        cur.pop_back();
    }
}

void solve() {
    int n;
    cin >> n;
    part(n, 1);
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
