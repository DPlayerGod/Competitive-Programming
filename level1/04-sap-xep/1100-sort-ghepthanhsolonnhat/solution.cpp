#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
string s[N];

bool cmp(const string &a, const string &b) {
    return a + b > b + a;                   // ghép a trước thì lớn hơn
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> s[i];
    sort(s + 1, s + n + 1, cmp);
    if (s[1] == "0") {                      // toàn số 0
        cout << "0\n";
        return 0;
    }
    for (int i = 1; i <= n; i++) cout << s[i];
    cout << '\n';
}
