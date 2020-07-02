#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, m; cin >> n >> m;
    if (n == 1 && m == 10) {
        cout << -1 << endl;
    } else if (m == 10) {
        cout << 1;
        for (int i = 0; i < n - 1; i++) {
            cout << 0;
        }
        cout << endl;
    } else {
        for (int i = 0; i < n; i++) {
            cout << m;
        }
        cout<< endl;
    }
}