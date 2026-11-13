#include <bits/stdc++.h>
using namespace std;

int main() {
    string line, w, res;
    getline(cin, line);
    stringstream ss(line);              // tách từ: tự bỏ mọi dấu cách thừa
    while (ss >> w) {
        for (char &c : w) c = tolower(c);
        w[0] = toupper(w[0]);
        if (!res.empty()) res += ' ';
        res += w;
    }
    cout << res << '\n';
}
