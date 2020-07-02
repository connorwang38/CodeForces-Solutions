#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t, p = 0, ans = 0;
    cin >> t;
    int c;
    for (int i = 0; i < t; i++) {
        cin >> c;
        if (c == -1 && p == 0) {
            ans++;
        } else if (c == -1 && p > 0) {
            p--;
        } else {
            p += c;
        }
    }
    cout << ans << endl;
}
