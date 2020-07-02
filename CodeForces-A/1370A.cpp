#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int c;
        cin >> c;
        if (c % 2 == 0) {
            cout << c / 2 << "\n";
        } else {
            cout << (c - 1) / 2 << "\n";
        }
    }
    return 0;
}