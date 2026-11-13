#include <bits/stdc++.h>
using namespace std;

const int OFFSET = 1000000;
int cnt[2 * OFFSET + 1];
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    long long dem = 0;
    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        int c = a - i;
        dem += cnt[c + OFFSET];
        cnt[c + OFFSET]++;
    }
    cout << dem << '\n';
}
