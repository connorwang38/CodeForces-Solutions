#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m; cin >> n >> m;
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string ans = alpha.substr(0, m - 2);
    for (int i = 0; i < n - m + 2; i++) {
        if (i % 2 == 0) {
            ans += "y";
        } else {
            ans += "z";
        }
    }
    cout << ans << "\n";
}