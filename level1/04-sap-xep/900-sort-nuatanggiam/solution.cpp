#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int h = n / 2;
    sort(a.begin(), a.begin() + h);
    sort(a.begin() + h, a.end(), greater<int>());
    for (int i = 0; i < n; i++) cout << a[i] << (i + 1 == n ? '\n' : ' ');
    return 0;
}
