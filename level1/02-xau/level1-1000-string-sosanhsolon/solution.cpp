#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b; cin >> a >> b;
    char ans;
    if (a.size() != b.size()) ans = a.size() < b.size() ? '<' : '>';   // nhiều chữ số hơn thì lớn hơn
    else if (a == b) ans = '=';
    else ans = a < b ? '<' : '>';      // cùng độ dài: so như xâu là đúng
    cout << ans << '\n';
}
