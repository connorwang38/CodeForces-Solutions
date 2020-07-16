#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    string ans = "";
    if (n % 2 == 0) {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 1) {
                ans = ans + s[i];
            } else {
                ans = s[i] + ans;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                ans = ans + s[i];
            } else {
                ans = s[i] + ans;
            }
        }
    }
    cout << ans << "\n";
}