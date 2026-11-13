#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<string> w(n);
    for (auto &s : w) cin >> s;
    sort(w.begin(), w.end(), [](const string &a, const string &b) {
        if (a.size() != b.size()) return a.size() < b.size();
        return a < b;
    });
    for (auto &s : w) cout << s << '\n';
}
