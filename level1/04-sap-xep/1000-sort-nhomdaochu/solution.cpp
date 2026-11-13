#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<string> w(n);
    for (auto &s : w) {
        cin >> s;
        sort(s.begin(), s.end());
    }
    sort(w.begin(), w.end());
    int groups = 0;
    for (int i = 0; i < n; i++)
        if (i == 0 || w[i] != w[i - 1]) groups++;
    cout << groups << '\n';
}
