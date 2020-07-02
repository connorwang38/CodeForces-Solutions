#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        bool test = false;
        cin >> n;
        int c = 3, cpos = 1;
        while (true) {
            if (n % c == 0) {
                test = true;
                cout << n / c << "\n";
                break;
            }
            cpos++;
            c = pow(2, cpos) - 1;
        }
    }
    return 0;
}