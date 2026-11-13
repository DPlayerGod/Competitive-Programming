#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> drunk;   // các lọ đã uống
    long long hp = 0;
    for (int i = 0; i < n; i++) {
        long long a; cin >> a;
        drunk.push(a); hp += a;                  // cứ uống đã
        if (hp < 0) { hp -= drunk.top(); drunk.pop(); }   // âm máu: "nhả" lọ tệ nhất
    }
    cout << drunk.size() << '\n';
}
