#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
pair<int, int> p[N];                        // (kết thúc, bắt đầu)

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> p[i].second >> p[i].first;
    sort(p + 1, p + n + 1);                 // kết thúc sớm đứng trước
    int cnt = 0, lastEnd = 0;
    for (int i = 1; i <= n; i++) {
        if (p[i].second >= lastEnd) {       // bắt đầu sau phim vừa chọn
            cnt++;
            lastEnd = p[i].first;
        }
    }
    cout << cnt << '\n';
}
