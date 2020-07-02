#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m, count = 0; cin >> n >> m;
    while (n--) {
        string s; cin >> s;
        bool test = true;
        for (int i = 0; i <= m; i++) {
            if (s.find(to_string(i)) == string::npos) {
                test = false;
            }
        }
        if (test) {
            count++;
        }
    }
    cout << count << endl;
}