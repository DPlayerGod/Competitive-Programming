#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    string s = to_string(n);            // số -> xâu
    reverse(s.begin(), s.end());
    cout << stoll(s) << '\n';           // xâu -> số: tự bỏ các số 0 ở đầu
}
