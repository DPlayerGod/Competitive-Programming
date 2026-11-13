#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2; char c;
    cin >> h1 >> c >> m1 >> c >> s1 >> h2 >> c >> m2 >> c >> s2;   // c đọc bỏ dấu ':'
    int t = (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1);   // đổi hết ra giây
    printf("%02d:%02d:%02d\n", t / 3600, t % 3600 / 60, t % 60);       // %02d: thêm số 0 ở đầu
}
