#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    vector<int> a((long long)n * m);             // "trải phẳng": ô (i, j) nằm ở a[i * m + j]
    vector<long long> col(m, 0);                 // tổng từng cột: kích thước biết lúc chạy
    long long bestRow = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        long long row = 0;
        for (int j = 0; j < m; j++) {
            int &x = a[(long long)i * m + j];
            cin >> x;
            row += x;
            col[j] += x;
        }
        bestRow = max(bestRow, row);
    }
    cout << bestRow << ' ' << *max_element(col.begin(), col.end()) << '\n';
    int q; cin >> q;
    while (q--) {
        int r, c; cin >> r >> c;                 // đánh số từ 1
        cout << a[(long long)(r - 1) * m + (c - 1)] << '\n';
    }
}
