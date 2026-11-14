#include <bits/stdc++.h>
using namespace std;

int n, have[26], avail[26], len[30], letters[30][26], covered, dead;
long long ans, pw[30];
void go(int i) {
    if (dead) return;
    if (covered == 26) { ans += pw[n - i + 1]; return; }
    if (i == n + 1) return;
    for (int j = 0; j < len[i]; j++) if (have[letters[i][j]]++ == 0) covered++;
    go(i + 1);
    for (int j = 0; j < len[i]; j++) if (--have[letters[i][j]] == 0) covered--;
    for (int j = 0; j < len[i]; j++) if (--avail[letters[i][j]] == 0) dead++;
    go(i + 1);
    for (int j = 0; j < len[i]; j++) if (avail[letters[i][j]]++ == 0) dead--;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string s; cin >> s; bool seen[26] = {};
        for (char c : s) if (!seen[c - 'a']) {
            seen[c - 'a'] = true; letters[i][len[i]++] = c - 'a'; avail[c - 'a']++;
        }
    }
    for (int c = 0; c < 26; c++) if (!avail[c]) dead++;
    pw[0] = 1;
    for (int i = 1; i <= n; i++) pw[i] = pw[i - 1] * 2;
    go(1); cout << ans << '\n';
}
