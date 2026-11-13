#include <bits/stdc++.h>
using namespace std;

int main() {
    string line, w;
    getline(cin, line);
    stringstream ss(line);
    vector<string> words;
    while (ss >> w) words.push_back(w);
    for (int i = (int)words.size() - 1; i >= 0; i--)          // dòng 1: đảo thứ tự từ
        cout << words[i] << (i ? " " : "\n");
    for (int i = 0; i < (int)words.size(); i++) {             // dòng 2: đảo từng từ
        reverse(words[i].begin(), words[i].end());
        cout << words[i] << (i + 1 < (int)words.size() ? " " : "\n");
    }
}
