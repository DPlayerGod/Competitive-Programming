#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int hoa = 0, thuong = 0, so = 0, khac = 0;
    for (char c : s) {
        if (isupper(c)) hoa++;
        else if (islower(c)) thuong++;
        else if (isdigit(c)) so++;
        else khac++;
    }
    cout << hoa << ' ' << thuong << ' ' << so << ' ' << khac << '\n';
}
