#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, m; cin >> n >> m;
    if (m - n <= 1 && m) {
        cout << -1 << endl;
    } else if (m - n == 2 && m % 2 == 1) {
        cout << -1 << endl;
    } else if (n % 2 == 0) {
        cout << n << " " << n + 1 << " " << n + 2 << endl;
    } else {
        cout << n + 1 << " " << n + 2 << " " << n + 3 << endl;
    }
}