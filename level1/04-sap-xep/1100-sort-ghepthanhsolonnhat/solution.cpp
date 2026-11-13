#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<string> s(n);
    for (auto &x : s) cin >> x;
    sort(s.begin(), s.end(), [](const string &a, const string &b) {
        return a + b > b + a;
    });
    if (s[0] == "0") {
        cout << "0\n";
        return 0;
    }
    for (auto &x : s) cout << x;
    cout << '\n';
}
