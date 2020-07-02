#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int n, h, t, n1 = 0, n2 = 0;
    cin >> n >> h ;
    while (n--) {
        cin >> t;
        if (t > h) {
            n2++;
        } else {
            n1++;
        }
    }
    cout << n1 + n2 * 2 << "\n";
    return 0;
}