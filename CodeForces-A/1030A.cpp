#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, t;
    bool test = true;
    cin >> n;
    while (n--) {
        cin >> t;
        if (t == 1) {
            test = false;
        }
    }
    if (test) {
        cout << "EASY" << "\n";
    } else {
        cout << "HARD" << "\n";
    }
    return 0;
}