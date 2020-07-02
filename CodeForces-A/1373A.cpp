#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a == c && b == 1) {
            cout << -1 << " " << -1 << endl;
        } else if (a >= c) {
            cout << -1 << " " << b << endl;
        } else if (a * b > c) {
            cout << 1 << " " << b << endl;
        } else {
            cout << 1 << " " << -1 << endl;
        }
    }
}
