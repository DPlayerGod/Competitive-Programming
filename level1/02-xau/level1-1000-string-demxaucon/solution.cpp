#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s >> t;
    int cnt = 0;
    size_t pos = s.find(t);                    // vị trí đầu tiên, không có: string::npos
    while (pos != string::npos) {
        cnt++;
        pos = s.find(t, pos + 1);              // tìm tiếp từ pos + 1: cho phép chồng nhau
    }
    cout << cnt << '\n';
}
