#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t, k; cin >> t >> k;
    int sum = 0;
    while (t--) {
        int f, s; cin >> f >> s;
        sum += s - f + 1;
    }
    if (sum % k == 0)  {
        cout << 0 << endl;
    } else {
        cout << k - sum % k << endl;
    }
}