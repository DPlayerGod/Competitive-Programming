#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int n; long long k; cin >> n >> k;
        long long R = 0;                      // trả đúng được mọi giá 1..R
        priority_queue<long long, vector<long long>, greater<long long>> wait;   // đồng chưa dùng được
        int ans = -1;
        for (int i = 1; i <= n; i++) {
            long long a; cin >> a;
            wait.push(a);
            while (!wait.empty() && wait.top() <= R + 1) {   // đồng nhỏ nhất nối tiếp được
                R += wait.top(); wait.pop();
            }
            if (ans == -1 && R >= k) ans = i;
        }
        cout << ans << '\n';
    }
}
