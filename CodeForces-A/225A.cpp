#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    bool test = true;
    while (n--) {
        int f, s; cin >> f >> s;
        if (f == m || f == 7 - m || s == m || s == 7 - m) {
            test = false;
        }
    }
    if (test) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}