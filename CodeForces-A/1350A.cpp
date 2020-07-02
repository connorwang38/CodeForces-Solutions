#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0) {
            n += k * 2;
        } else {
            int test = 3;
            while (n % test != 0) {
                test++;
            }
            n += (k - 1) * 2 + test;
        }
        cout << n << "\n";
    }
    return 0;
}