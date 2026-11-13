#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    map<string, int> cnt;
    for (int i = 0; i < n; i++) { string s; cin >> s; cnt[s]++; }
    string ten;
    int best = 0;
    for (auto &p : cnt) {
        if (p.second > best) { best = p.second; ten = p.first; }   // > chứ không phải >=
    }
    cout << ten << ' ' << best << '\n';
}
