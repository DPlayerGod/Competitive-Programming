#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool up = false, low = false, dig = false, spec = false;
    for (char c : s) {
        if (isupper(c)) up = true;
        else if (islower(c)) low = true;
        else if (isdigit(c)) dig = true;
        else spec = true;
    }
    bool ok = s.size() >= 8 && up && low && dig && spec;
    cout << (ok ? "YES" : "NO") << '\n';
}
