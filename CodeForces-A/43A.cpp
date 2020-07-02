#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, fi = 0, si = 0; cin >> n; n--;
    string f, s, c; cin >> f;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c != f) {
            s = c;
            si++;
        } else {
            fi++;
        }
    }
    if (si > fi) {
        cout << s << endl;
    } else {
        cout << f << endl;
    }
}