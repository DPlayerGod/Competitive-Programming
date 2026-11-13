#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string order; int n;
    cin >> order >> n;
    int rk[26];
    for (int i = 0; i < 26; i++) rk[order[i] - 'a'] = i;   // rk[c] = thứ tự của chữ c
    vector<string> w(n);
    for (auto &s : w) cin >> s;
    sort(w.begin(), w.end(), [&](const string &a, const string &b) {   // [&]: dùng được rk bên ngoài
        for (int i = 0; i < (int)min(a.size(), b.size()); i++)
            if (a[i] != b[i]) return rk[a[i] - 'a'] < rk[b[i] - 'a'];
        return a.size() < b.size();       // một từ là tiền tố của từ kia: từ ngắn trước
    });
    for (auto &s : w) cout << s << '\n';
}
