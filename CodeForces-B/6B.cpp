#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m, c; cin >> n >> m >> c;
    set <char> s;
    for (int i = 0; i < n; i++) {
        string l; cin >> l;
        for (int j = 0; j < m; j++) {
            if (l[j] == c) {
                s.insert();
            }
        }
    }
    s.erase('.');
    s.erase(c);
    cout << s.size() << "\n";
}