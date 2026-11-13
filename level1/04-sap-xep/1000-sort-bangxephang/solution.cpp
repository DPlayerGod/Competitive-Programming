#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int score;
};

bool cmp(const Student &a, const Student &b) {
    if (a.score != b.score) return a.score > b.score;
    return a.name < b.name;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    vector<Student> a(n);
    for (auto &s : a) cin >> s.name >> s.score;
    sort(a.begin(), a.end(), cmp);
    for (auto &s : a) cout << s.name << ' ' << s.score << '\n';
}
