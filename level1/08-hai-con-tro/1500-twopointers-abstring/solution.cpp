#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; string s;
    cin >> n >> k >> s;
    int best = 0;
    for (char c : {'a', 'b'}) {          // thử biến cả đoạn thành 'a', rồi thành 'b'
        int l = 0, bad = 0;              // bad = số ký tự khác c trong cửa sổ
        for (int r = 0; r < n; r++) {
            if (s[r] != c) bad++;
            while (bad > k) {
                if (s[l] != c) bad--;
                l++;
            }
            best = max(best, r - l + 1);
        }
    }
    cout << best << '\n';
}
