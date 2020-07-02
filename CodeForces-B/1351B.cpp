#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == c && b + d == a) {
            cout << "YES" << "\n";
        } else if (a == d && b + c == a) {
            cout << "YES" << "\n";
        } else if (b == c && a + d == b) {
            cout << "YES" << "\n";
        } else if (b == d && a + c == b) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}