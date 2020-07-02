#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s, t;
    int cur = 0;
    cin >> s >> t;
    for (int i = 0; i < t.length(); i++) {
        if (t[i] == s[cur]) {
            cur++;
        }
    }
    cout << cur + 1 << endl;
}
