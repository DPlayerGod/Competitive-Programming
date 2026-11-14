#include <bits/stdc++.h>
using namespace std;

string s;
bool checkPairs(int l, int r) {
    if (l > r) return true;
    if (l == r) return s[l] == s[(int)s.size() - 1 - l];
    int mid = (l + r) / 2;
    return checkPairs(l, mid) && checkPairs(mid + 1, r);
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> s;
    cout << (checkPairs(0, (int)s.size() / 2 - 1) ? "YES" : "NO") << '\n';
}
