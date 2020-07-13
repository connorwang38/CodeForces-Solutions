#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t, n; cin >> t;

    while (t--) {
        int n, a = 1, b;
        cin >> n;
        int value = 0;
        b = n - 1;
        int index = n / 2;
        if (n % 2 == 0) {
            a = b = n / 2;
        } else {
            value = n / index;
            while (value < n / 2) {
                if (value * index == n) {
                    a = index;
                    b = n - index;
                    break;
                }
                index--;
                value = n / index;
            }
        }
        cout << a << " " << b << endl;
    }
}