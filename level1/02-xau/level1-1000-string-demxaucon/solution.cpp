#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s >> t;
    int cnt = 0;
    size_t pos = s.find(t);        // không có thì pos = string::npos
    while (pos != string::npos) {
        cnt++;
        pos = s.find(t, pos + 1);  // từ pos + 1: đếm cả lần chồng nhau
    }
    cout << cnt << '\n';
}
