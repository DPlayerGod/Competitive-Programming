#include <bits/stdc++.h>
using namespace std;

const int V = 10000;
int cnt[V + 1];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        cnt[x]++;
    }
    int best = 1;
    for (int v = 1; v <= V; v++)
        if (cnt[v] > cnt[best]) best = v;
    cout << best << '\n';
}
