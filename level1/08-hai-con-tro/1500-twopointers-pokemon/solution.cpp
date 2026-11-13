#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; string s;
    cin >> n >> s;
    set<char> types(s.begin(), s.end());
    int need = types.size();             // số loại phải có
    int cnt[128] = {0}, have = 0;        // have = số loại đang có trong cửa sổ
    int l = 0, best = n;
    for (int r = 0; r < n; r++) {
        if (cnt[(int)s[r]]++ == 0) have++;
        while (cnt[(int)s[l]] > 1) cnt[(int)s[l++]]--;   // bỏ phần tử trái nếu vẫn còn bản khác
        if (have == need) best = min(best, r - l + 1);
    }
    cout << best << '\n';
}
