#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; cin >> s;
    vector<char> d;
    for (char c : s) if (c != '+') d.push_back(c);
    sort(d.begin(), d.end());
    for (size_t i = 0; i < d.size(); i++) {
        if (i > 0) cout << '+';
        cout << d[i];
    }
    cout << '\n';
}
