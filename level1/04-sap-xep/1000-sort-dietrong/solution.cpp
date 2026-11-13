#include <bits/stdc++.h>
using namespace std;

pair<int, int> d[1005];                     // (sức mạnh x, phần thưởng y)

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int s, n; cin >> s >> n;
    for (int i = 1; i <= n; i++) cin >> d[i].first >> d[i].second;
    sort(d + 1, d + n + 1);                 // rồng yếu trước
    for (int i = 1; i <= n; i++) {
        if (s <= d[i].first) {
            cout << "NO\n";
            return 0;
        }
        s += d[i].second;
    }
    cout << "YES\n";
}
