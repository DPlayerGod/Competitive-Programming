#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b; cin >> a >> b;
    int cnt[26] = {0};
    for (char c : a) cnt[c - 'a']++;
    for (char c : b) cnt[c - 'a']--;
    bool ok = true;
    for (int i = 0; i < 26; i++)
        if (cnt[i] != 0) ok = false;
    cout << (ok ? "YES" : "NO") << '\n';
}
