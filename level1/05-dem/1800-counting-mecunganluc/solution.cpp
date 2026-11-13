#include <bits/stdc++.h>
using namespace std;

long long n, tinhLang;
map<long long, long long> Row, Col, cntR, cntC;
map<pair<long long, long long>, long long> thap;
void them(long long r, long long c, long long x) {
    tinhLang -= cntC[-Row[r]];
    cntR[Row[r]]--;
    Row[r] += x;
    cntR[Row[r]]++;
    tinhLang += cntC[-Row[r]];
    tinhLang -= cntR[-Col[c]];
    cntC[Col[c]]--;
    Col[c] += x;
    cntC[Col[c]]++;
    tinhLang += cntR[-Col[c]];
}
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int k, p; cin >> n >> k >> p;
    tinhLang = n * n;
    cntR[0] = cntC[0] = n;
    for (int i = 1; i <= k; i++) {
        long long r, c, x; cin >> r >> c >> x;
        thap[{r, c}] = x;
        them(r, c, x);
    }
    while (p--) {
        long long r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        long long x = thap.at({r1, c1});
        thap.erase({r1, c1});
        thap[{r2, c2}] = x;
        them(r1, c1, -x);
        them(r2, c2, x);
        cout << n * n - tinhLang << '\n';
    }
}
