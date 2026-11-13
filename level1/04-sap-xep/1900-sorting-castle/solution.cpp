#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ull, ull> Big;                     // số 128 bit dạng (hi, lo); so sánh pair = so sánh số

// a, b <= 2^32 nên tích <= 2^64, không vừa ull -> tách thành (hi, lo)
Big mul(ull a, ull b) {
    ull a1 = a >> 32, a0 = a & 0xffffffffULL, b1 = b >> 32, b0 = b & 0xffffffffULL;
    ull lo = a0 * b0, mid = a1 * b0 + a0 * b1, hi = a1 * b1 + (mid >> 32);
    ull r = lo + (mid << 32);
    if (r < lo) hi++;
    return {hi, r};
}

string toStr(Big v) {                           // hi * 2^64 + lo, với hi nhỏ
    string s = to_string(v.second), t = "18446744073709551616";
    for (ull k = 0; k < v.first; k++) {         // cộng chuỗi t vào s
        string r;
        int carry = 0;
        for (int i = s.size() - 1, j = t.size() - 1; i >= 0 || j >= 0 || carry; i--, j--) {
            int d = carry + (i >= 0 ? s[i] - '0' : 0) + (j >= 0 ? t[j] - '0' : 0);
            r += char('0' + d % 10);
            carry = d / 10;
        }
        s.assign(r.rbegin(), r.rend());
    }
    return s;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<pair<ll, ll>> p(n);
    for (auto &[x, y] : p) scanf("%lld %lld", &x, &y);
    // nén tung độ
    vector<ll> ys;
    for (auto &[x, y] : p) ys.push_back(y);
    sort(ys.begin(), ys.end());
    ys.erase(unique(ys.begin(), ys.end()), ys.end());
    int K = ys.size();
    sort(p.begin(), p.end());                    // theo x tăng, cùng x thì y tăng
    // cạnh dọc (ya, yb) với ya < yb được đánh số bằng tam giác: id(a, b)
    auto id = [&](ll a, ll b) { return a * (2LL * K - a - 1) / 2 + (b - a - 1); };
    ll pairsCnt = (ll)K * (K - 1) / 2;
    // mỗi cạnh dọc lưu: số lần xuất hiện, hoành độ đầu tiên, hoành độ gần nhất (chỉ số trong mảng xs)
    vector<ll> xs;
    vector<int> cnt(pairsCnt, 0), first(pairsCnt, -1), last(pairsCnt, -1);
    ll total = 0;
    Big minArea = {0, 0}, maxArea = {0, 0};   // diện tích luôn > 0, nên {0, 0} = chưa có
    ll minCnt = 0, maxCnt = 0;
    for (int i = 0; i < n;) {
        int j = i;
        while (j < n && p[j].first == p[i].first) j++;
        int xi = xs.size();
        xs.push_back(p[i].first);
        vector<int> col;
        for (int k = i; k < j; k++) col.push_back(lower_bound(ys.begin(), ys.end(), p[k].second) - ys.begin());
        for (size_t a = 0; a < col.size(); a++)
            for (size_t b = a + 1; b < col.size(); b++) {
                ll e = id(col[a], col[b]);
                if (cnt[e] > 0) {
                    total += cnt[e];                     // ghép với mọi cạnh dọc trước đó cùng (ya, yb)
                    // hình nhỏ nhất của cạnh này luôn là hai hoành độ liên tiếp
                    Big area = mul(ys[col[b]] - ys[col[a]], xs[xi] - xs[last[e]]);
                    if (minArea == Big{0, 0} || area < minArea) { minArea = area; minCnt = 1; }
                    else if (area == minArea) minCnt++;
                } else first[e] = xi;
                cnt[e]++;
                last[e] = xi;
            }
        i = j;
    }
    printf("%lld\n", total);
    if (total == 0) return 0;
    for (int a = 0; a < K; a++)
        for (int b = a + 1; b < K; b++) {
            ll e = id(a, b);
            if (cnt[e] < 2) continue;
            // hình lớn nhất của cạnh này: hoành độ đầu và cuối
            Big area = mul(ys[b] - ys[a], xs[last[e]] - xs[first[e]]);
            if (area > maxArea) { maxArea = area; maxCnt = 1; }
            else if (area == maxArea) maxCnt++;
        }
    printf("%s %lld\n%s %lld\n", toStr(maxArea).c_str(), maxCnt, toStr(minArea).c_str(), minCnt);
}
