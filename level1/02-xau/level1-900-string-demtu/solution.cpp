#include <bits/stdc++.h>
using namespace std;

int main() {
    string line, w, longest;
    getline(cin, line);
    stringstream ss(line);
    int cnt = 0;
    while (ss >> w) {
        cnt++;
        if (w.size() > longest.size()) longest = w;  // ">": giữ từ trước
    }
    cout << cnt << '\n' << longest << '\n';
}
