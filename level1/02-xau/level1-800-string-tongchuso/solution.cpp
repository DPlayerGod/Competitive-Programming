#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;                // số có tới 10^5 chữ số: không vừa long long
    long long sum = 0;
    for (char c : s) sum += c - '0';   // '7' - '0' = 7
    cout << sum << '\n';
}
