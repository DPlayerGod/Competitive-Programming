#include <bits/stdc++.h>
using namespace std;
const int N = 10005;
pair<int, int> cow[N]; // han, sua
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> cow[i].second >> cow[i].first;
    sort(cow + 1, cow + n + 1);
    priority_queue<int, vector<int>, greater<int>> taken;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        taken.push(cow[i].second); sum += cow[i].second;
        if ((int)taken.size() > cow[i].first) {
            sum -= taken.top(); taken.pop();
        }
    }
    cout << sum << '\n';
}
