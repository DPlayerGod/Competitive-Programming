#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string res;
    for (int i = 0; i < (int)s.size(); ) {
        char c = s[i++];
        int num = 0;
        while (i < (int)s.size() && isdigit(s[i]))
            num = num * 10 + (s[i++] - '0');             // ghép từng chữ số thành số
        res += string(num, c);                            // num lần ký tự c
    }
    cout << res << '\n';
}
