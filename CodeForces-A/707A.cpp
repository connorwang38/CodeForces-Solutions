#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    bool test = true;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < m; i++) {
            char c; cin >> c;
            if (c != 'W' && c != 'B' && c != 'G') {
                test = false;
            }
        }
    }
    if (test) {
        cout << "#Black&White" << endl;
    } else {
        cout << "#Color" << endl;
    }
}