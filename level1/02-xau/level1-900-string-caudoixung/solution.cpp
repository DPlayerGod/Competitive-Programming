#include <bits/stdc++.h>
using namespace std;

int main() {
    string line, t;
    getline(cin, line);
    for (char c : line)
        if (isalnum(c)) t += tolower(c);   // chỉ giữ chữ cái và chữ số, về chữ thường
    bool ok = true;
    for (int i = 0, j = (int)t.size() - 1; i < j; i++, j--)
        if (t[i] != t[j]) ok = false;
    cout << (ok ? "YES" : "NO") << '\n';
}
