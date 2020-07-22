#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int app(int n, int a) {
    if (n < 10) {
        return a + 9;
    } else {
        n++;
        while (n % 10 == 0) {
            n /= 10;
        }
        return 1 + app(n, a);
    }
}

int main() {
    int n; cin >> n;
    cout << app(n, 0) << "\n";
}