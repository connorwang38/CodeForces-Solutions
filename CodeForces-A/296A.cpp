#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    int array[1000] = {0};
    bool test = false;
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        array[c - 1] += 1;
    }
    for (int i = 0; i < 1000; i++) {
        if ((n % 2 == 0 && array[i] > n / 2) || (n % 2 == 1 && array[i] > n / 2 + 1)) {
            test = true;
        }
    }
    if (test) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}