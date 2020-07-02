#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string str, val;
    cin >> val;
    if (val.length() == 2) {
        cout << 0 << "\n";
    } else if (val[2] == '}') {
        cout << 1 << "\n";
    } else {
        set <char> s;
        s.insert(val[1]);
        while (true) {
            cin >> val;
            s.insert(val[0]);
            if (val[1] == '}') {
                break;
            }
        }
        cout << s.size() << "\n";
    }
}