#include <bits/stdc++.h>
using namespace std;

int n, m, want[12], matchCount[12];
string s[12];
long long ans;
void go(int i) {
    if (i == n) { ans++; return; }
    for (char b : {'0','1'}) {
        bool ok = true;
        for (int j = 1; j <= m; j++) {
            matchCount[j] += (s[j][i] == b);
            if (matchCount[j] > want[j] || matchCount[j] + n - i - 1 < want[j]) ok = false;
        }
        if (ok) go(i + 1);
        for (int j = 1; j <= m; j++) matchCount[j] -= (s[j][i] == b);
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n >> m;
    for (int j = 1; j <= m; j++) cin >> s[j] >> want[j];
    go(0); cout << ans << '\n';
}
