#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s; cin >> s;
    if (s.at(0) - '0' >= 5 && s.at(0) - '0' < 9) {
            cout << 9 - (s.at(0) - '0');
        } else {
            cout << s.at(0) - '0';
        }
    for (int i = 1; i < s.length(); i++) {
        if (s.at(i) - '0' >= 5) {
            cout << 9 - (s.at(i) - '0');
        } else {
            cout << s.at(i) - '0';
        }
    }
    cout << endl;
}