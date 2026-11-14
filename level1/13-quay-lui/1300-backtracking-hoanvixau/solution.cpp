#include <bits/stdc++.h>
using namespace std;

int n, freq[26];
string a;
void go() {
    if ((int)a.size() == n) { cout << a << '\n'; return; }
    for (int c = 0; c < 26; c++) if (freq[c]) {
        freq[c]--; a.push_back(char('a' + c));
        go(); a.pop_back(); freq[c]++;
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s; cin >> s; n = (int)s.size();
    for (char c : s) freq[c - 'a']++;
    long long f[15] = {1};
    for (int i = 1; i <= n; i++) f[i] = f[i - 1] * i;
    long long den = 1;
    for (int c = 0; c < 26; c++) den *= f[freq[c]];
    cout << f[n] / den << '\n'; go();
}
