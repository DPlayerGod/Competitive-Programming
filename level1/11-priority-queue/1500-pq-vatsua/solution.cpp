#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int,int>> cow(n);             // (hạn chót d, lượng sữa g)
    for (auto &c : cow) cin >> c.second >> c.first;
    sort(cow.begin(), cow.end());
    priority_queue<int, vector<int>, greater<int>> taken;   // sữa của các con đã chọn
    long long sum = 0;
    for (auto &c : cow) {
        taken.push(c.second); sum += c.second;
        if ((int)taken.size() > c.first) {    // không đủ thời điểm: bỏ con ít sữa nhất
            sum -= taken.top(); taken.pop();
        }
    }
    cout << sum << '\n';
}
