#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    vector<bool> nt(b + 1, true);             // nt[x] = true: x là số nguyên tố
    nt[0] = false;
    if (b >= 1) nt[1] = false;
    for (int p = 2; p * p <= b; p++)
        if (nt[p])
            for (int j = p * p; j <= b; j += p) nt[j] = false; // gạch bội p
    int cnt = 0;
    for (int x = a; x <= b; x++)
        if (nt[x]) cnt++;
    cout << cnt << '\n';
}
