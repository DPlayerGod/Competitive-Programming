#include <bits/stdc++.h>
using namespace std;

string s;

// s[l..r] is a palindrome iff s[l] == s[r] and s[l+1..r-1] is one. O(1) per call.
bool check(int l, int r) {
    if (l >= r) return true;
    if (s[l] != s[r]) return false;
    return check(l + 1, r - 1);
}

void solve() {
    cin >> s;
    cout << (check(0, (int)s.size() - 1) ? "YES" : "NO") << "\n";
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
