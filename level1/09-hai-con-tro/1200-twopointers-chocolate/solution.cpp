#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<int> t(n);
    for (int &x : t) cin >> x;
    int i = 0, j = n - 1;
    long long ta = 0, tb = 0;     // thời điểm Alice / Bob ăn xong thanh hiện tại
    while (i <= j) {
        if (ta <= tb) ta += t[i++];   // Alice rảnh trước (hoặc cùng lúc: nhường Alice)
        else          tb += t[j--];
    }
    cout << i << ' ' << n - i << '\n';
}
