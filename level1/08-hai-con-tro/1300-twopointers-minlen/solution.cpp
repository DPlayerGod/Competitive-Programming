#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long S; cin >> n >> S;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    int l = 0, best = INT_MAX;
    long long sum = 0;
    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum >= S) {                 // đoạn đang đạt: ghi nhận rồi thử co lại
            best = min(best, r - l + 1);
            sum -= a[l++];
        }
    }
    cout << (best == INT_MAX ? -1 : best) << '\n';
}
