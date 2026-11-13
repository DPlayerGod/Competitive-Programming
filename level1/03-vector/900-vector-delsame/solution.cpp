#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(a.begin(), a.end());                       // các số bằng nhau đứng cạnh nhau
    a.erase(unique(a.begin(), a.end()), a.end());   // unique dồn số khác nhau lên đầu, erase cắt đuôi
    for (int x : a) cout << x << ' ';
    cout << '\n';
}
