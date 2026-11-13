#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    vector<pair<int,int>> q(m);                 // (giá trị b, chỉ số)
    for (int i = 0; i < m; i++) { cin >> q[i].first; q[i].second = i; }
    sort(a.begin(), a.end());
    sort(q.begin(), q.end());                   // trả lời truy vấn theo b tăng dần
    vector<int> ans(m);
    int j = 0;
    for (auto &p : q) {
        while (j < n && a[j] <= p.first) j++;
        ans[p.second] = j;                      // ghi về đúng vị trí ban đầu
    }
    for (int x : ans) cout << x << ' ';
    cout << '\n';
}
