#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n, m;
        cin >> x >> n >> m;
        while (n--) {
            if (x >= 20) {
                x = x / 2 + 10;
            }
        }
        while (m--) {
            x -= 10;
        }
        if (x > 0) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }
}