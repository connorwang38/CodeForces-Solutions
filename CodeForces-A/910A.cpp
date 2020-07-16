#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    string s; cin >> s;
    int cur = m - 1;
    bool test = true;
    int num = 0;
    while (cur <= n) {
        if (s[cur] != '1') {
            test = false;
        }
        cur += m;
        num++;
    }
    if (test) {
        cout << num << "\n";
    } else {
        cout << -1 << "\n";
    }
}