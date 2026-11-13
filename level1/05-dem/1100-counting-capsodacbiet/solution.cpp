#include <bits/stdc++.h>
using namespace std;

const int V = 1000000;
int cnt[V + 1];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, S; cin >> n >> S;
    long long dem = 0;
    for (int j = 1; j <= n; j++) {
        int x; cin >> x;
        int can = S - x;
        if (1 <= can && can <= V) dem += cnt[can];
        cnt[x]++;
    }
    cout << dem << '\n';
}
