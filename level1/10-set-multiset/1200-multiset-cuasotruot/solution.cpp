#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
int a[N];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    multiset<int> w;                             // các phần tử trong cửa sổ
    for (int i = 1; i <= n; i++) {
        w.insert(a[i]);
        if (i > k) w.erase(w.find(a[i - k]));   // bỏ phần tử ra khỏi cửa sổ (một bản)
        if (i >= k) cout << *w.rbegin() << ' ' << *w.begin() << '\n';
    }
}
