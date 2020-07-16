#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    string s = "ROYGBIV", ans = "ROY";
    int count = 0;
    for (int i = 7; i <= n; i += 4) {
        ans += "GBIV";
        count += 4;
    }
    if (n % 4 == 0) {
        ans += "G";
    } else if (n % 4 == 1) {
        ans += "GB";
    } else if (n % 4 == 2) {
        ans += "GBI";
    }
    cout << ans << "\n";
}