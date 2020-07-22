#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool test = false;
        int ans;
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            for (int j = 0; j < n; j++) {
                if (a[j] == b[i]) {
                    test = true;
                    ans = b[i];
                    break;
                }
            }
        }
        if (test) {
            cout << "YES" << "\n" << 1 << " " << ans << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}