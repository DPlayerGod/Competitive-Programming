#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        string s;
        long long W;
        cin >> s >> W;
        // Mỗi bước đẩy thùng vào ô trống kề bên = đổi chỗ thùng với một ô trống,
        // tức là "dời một ô trống" đi 1 bước. Vậy cần gom W ô trống liên tiếp (theo thứ tự)
        // thành một khối liền nhau với tổng quãng dời nhỏ nhất.
        vector<long long> q;                       // q_i = vị trí ô trống thứ i - i
        for (long long i = 0; i < (long long)s.size(); i++)
            if (s[i] == '.') q.push_back(i - (long long)q.size());
        long long k = q.size();
        if (k < W) { cout << -1 << "\n"; continue; }
        vector<long long> pre(k + 1, 0);
        for (int i = 0; i < k; i++) pre[i + 1] = pre[i] + q[i];
        long long best = LLONG_MAX;
        for (long long l = 0; l + W <= k; l++) {   // nhóm ô trống thứ l .. l + W - 1
            long long r = l + W, m = l + W / 2;    // q tăng dần nên trung vị là q[m]
            long long left = q[m] * (m - l) - (pre[m] - pre[l]);
            long long right = (pre[r] - pre[m]) - q[m] * (r - m);
            best = min(best, left + right);        // tổng |q_i - trung vị|
        }
        cout << best << "\n";
    }
}
