#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    for (auto & c: s) c = tolower(c);
    bool ans = true;
    for (int i = 0; i < 26; i++) {
        if (s.find(string(1, alpha[i])) == string::npos) {
            ans = false;
        }
    }
    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}