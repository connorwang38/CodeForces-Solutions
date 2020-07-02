#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    string s = "abcdefghijklmnopqrstuvwxyz";
    cin >> t;
    while (t--) {
        int n, a, b;
        string ans;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i += b) {
            ans += s.substr(0, b);
        }
        ans = ans.substr(0, n);
        cout << ans << endl;
    }
}
