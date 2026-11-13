#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<tuple<int,int,string>> v;   // (-toán, -văn, tên): đổi dấu
    for (int i = 0; i < n; i++) {
        string ten; int toan, van; cin >> ten >> toan >> van;
        v.push_back({-toan, -van, ten});
    }
    sort(v.begin(), v.end());              // tuple: so lần lượt từng thành phần
    for (auto &[a, b, ten] : v) cout << ten << ' ' << -a << ' ' << -b << '\n';
}
