#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m, f, s; cin >> n;
    bool same = true, order = true;
    cin >> f >> s;
    m = f;
    n--;
    if (f != s) {
        same = false;
    }
    while (n--) {
        cin >> f >> s;
        if (f != s) {
            same = false;
        }
        if (f > m) {
            order = false;
        }
        m = f;
    }
    if (!same) {
        cout << "rated" << endl;
    } else if (same && order) {
        cout << "maybe" << endl;
    } else {
        cout << "unrated" << endl;
    }
}