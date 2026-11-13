#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    long long cnt = 0;
    for (long long p = 5; p <= n; p *= 5)       // số thừa số 5 trong n! (thừa số 2 luôn nhiều hơn)
        cnt += n / p;
    cout << cnt << '\n';
}
