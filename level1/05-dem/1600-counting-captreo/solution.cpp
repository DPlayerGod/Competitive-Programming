#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
long long h[N], dem;
map<long long, int> lenDoc, xuongDoc;
void capNhat(int p, int dau) {
    long long c = h[p] - p, d = h[p] + p;
    if (dau == -1) {
        lenDoc[c]--; xuongDoc[d]--;
        dem -= lenDoc[c] + xuongDoc[d];
    } else {
        dem += lenDoc[c] + xuongDoc[d];
        lenDoc[c]++; xuongDoc[d]++;
    }
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> h[i]; capNhat(i, +1);
    }
    while (q--) {
        int p; long long v; cin >> p >> v;
        capNhat(p, -1);
        h[p] = v;
        capNhat(p, +1);
        cout << dem << '\n';
    }
}
