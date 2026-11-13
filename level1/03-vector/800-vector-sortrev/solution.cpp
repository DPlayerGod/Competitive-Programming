#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    vector<int> b = a;                    // giữ bản gốc: dòng 2 đảo ngược mảng BAN ĐẦU
    sort(b.begin(), b.end());
    for (int x : b) cout << x << ' ';
    cout << '\n';
    reverse(a.begin(), a.end());
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
