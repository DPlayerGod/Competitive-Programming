#include <bits/stdc++.h>
using namespace std;

int n;
string s;
void go(int open, int close) {
    if (close == n) { cout << s << '\n'; return; }
    if (open < n) {
        s.push_back('('); go(open + 1, close); s.pop_back();
    }
    if (close < open) {
        s.push_back(')'); go(open, close + 1); s.pop_back();
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> n; go(0, 0);
}
