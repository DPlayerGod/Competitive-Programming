#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k; cin >> k;
    cin.ignore();                       // bỏ dấu xuống dòng còn sót sau khi đọc k
    string s; getline(cin, s);
    k %= 26;                            // dịch 26 lần là quay về chỗ cũ
    for (char &c : s) {
        if (islower(c)) c = 'a' + (c - 'a' + k) % 26;
        else if (isupper(c)) c = 'A' + (c - 'A' + k) % 26;
    }
    cout << s << '\n';
}
