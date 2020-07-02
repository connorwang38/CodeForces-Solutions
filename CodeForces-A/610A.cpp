#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int n;
    cin >> n;
    if (n % 2 == 1) {
        cout << 0 << "\n";
    } else if (n % 4 == 0) {
        cout << n / 4 - 1 << "\n";
    } else {
        cout << n / 4 << "\n";
    }
    return 0;
}