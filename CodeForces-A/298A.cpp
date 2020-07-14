#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    if (s.find("RL") != string::npos) {
        cout << s.find("R") + 1 << " " << s.find("L") << '\n';
    } else if (s.find("R") == string::npos) {
        cout << s.find_last_of("L") + 1 << " " << s.find("L") << endl;
    } else {
        cout << s.find("R") + 1 << " " << s.find_last_of("R") + 2 << endl;
    }
}