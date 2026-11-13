#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    vector<int> b = a;
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());          // b = các giá trị khác nhau, tăng dần
    for (int x : a)
        cout << lower_bound(b.begin(), b.end(), x) - b.begin() + 1 << ' ';   // thứ hạng của x
    cout << '\n';
}
