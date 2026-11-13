#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    int total = 0;
    for (int &x : a) { cin >> x; total += x; }
    sort(a.begin(), a.end(), greater<int>());
    int mine = 0, cnt = 0;
    for (int x : a) {
        mine += x; cnt++;
        if (mine > total - mine) break;
    }
    cout << cnt << '\n';
}
