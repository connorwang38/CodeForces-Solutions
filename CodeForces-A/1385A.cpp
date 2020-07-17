#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int n; cin >> n;
    while (n--) {
        int x, y, z; cin >> x >> y >> z;
        if (x == y && x == z) {
            cout << "YES" << "\n";
            cout << x << " " << y << " " << z << "\n";
        } else if (x != y && y != z && x != z) {
            cout << "NO" << "\n";
        } else {
            if (x == y) {
                if (x < z) {
                    cout << "NO" << "\n";
                } else {
                    cout << "YES" << "\n";
                    cout << 1 << " " << x << " " << z << "\n";
                }
            } else if (y == z) {
                if (y < x) {
                    cout << "NO" << "\n";
                } else {
                    cout << "YES" << "\n";
                    cout << 1 << " " << x << " " << z << "\n";
                }
            } else {
                if (x < y) {
                    cout << "NO" << "\n";
                } else {
                    cout << "YES" << "\n";
                    cout << 1 << " " << y << " " << z << "\n";
                }
            }
        }
    }
}