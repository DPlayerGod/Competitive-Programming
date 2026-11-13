#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
pair<int, int> v[N];                        // (giá trị, chỉ số ban đầu)

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v + 1, v + n + 1);
    for (int i = 1; i <= n; i++) cout << v[i].second << (i == n ? '\n' : ' ');
}
