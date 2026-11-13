#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int cnt[26] = {0};                  // cnt[0] cho 'a', cnt[1] cho 'b', ...
    for (char c : s) cnt[c - 'a']++;
    int best = 0;
    for (int i = 1; i < 26; i++)
        if (cnt[i] > cnt[best]) best = i;   // ">" : bằng nhau giữ chữ nhỏ hơn
    cout << (char)('a' + best) << ' ' << cnt[best] << '\n';
}
