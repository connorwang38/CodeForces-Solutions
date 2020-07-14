#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s; cin >> s;
    if (s[0] == '1' && s.substr(1, s.length() - 1).find('1') == string::npos) {
        cout << s.length() / 2 << endl;
    } else if (s == "0") {
        cout << 0 << endl;
    } else {
        cout << (s.length() + 1) / 2 << endl;
    }
}