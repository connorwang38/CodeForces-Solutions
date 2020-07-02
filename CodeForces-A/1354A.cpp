#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b >= a) {
            cout << b << "\n";
        } else if (d >= c) {
            cout << -1 << "\n";
        } else {
            ll count;
            int add = 0;
            if ((a - b) % (c - d) != 0) {
                add = c;
            }
            count = b + ((a - b) / (c - d)) * c + add;
            cout << count << "\n";
        }
    }
    return 0;
}