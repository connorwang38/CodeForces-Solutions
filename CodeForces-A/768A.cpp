#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; int last = n;
    int c; cin >> c;
    int ma = c, mi = c, mac = 1, mic = 1;
    n--;
    while (n--) {
        cin >> c;
        if (c == ma) {
            mac++;
        }
        if (c > ma) {
            ma = c;
            mac = 1;
        }
        if (c == mi) {
            mic++;
        }
        if (c < mi) {
            mi = c;
            mic = 1;
        }
    }
    if (ma == mi) {
        cout << 0 << endl;
    } else {
        cout << last - mac - mic << endl;
    }
}