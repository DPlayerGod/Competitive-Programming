#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    map<string, int> cnt;
    while (n--) {
        string s; cin >> s;
        if (cnt[s] == 0) cout << "OK\n";        // lần đầu (cnt[s] tự tạo bằng 0)
        else cout << s << cnt[s] << '\n';
        cnt[s]++;
    }
}
