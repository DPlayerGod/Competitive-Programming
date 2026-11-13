#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);                          // đọc cả dòng, kể cả dấu cách
    for (char &c : s) {                       // &: sửa trực tiếp ký tự trong s
        if ('a' <= c && c <= 'z') c = c - 'a' + 'A';        // thường -> hoa
        else if ('A' <= c && c <= 'Z') c = c - 'A' + 'a';   // hoa -> thường
    }
    cout << s << '\n';
}
