#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string res;
    for (int i = 0; i < (int)s.size(); ) {
        int j = i;
        while (j < (int)s.size() && s[j] == s[i]) j++;   // s[i..j-1] cùng một ký tự
        res += s[i];
        res += to_string(j - i);        // số lần lặp có thể nhiều chữ số
        i = j;
    }
    cout << res << '\n';
}
