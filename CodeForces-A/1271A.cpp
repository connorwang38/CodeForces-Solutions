
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int a, b, c, d, e, f, ans;
    cin >> a >> b >> c >> d >> e >> f;
    if (e > f) {
        int temp = min(a, d);
        ans = temp * e;
        d -= temp;
        ans += min(min(b, c), d) * f;
    } else {
        int temp = min(min(b, c), d);
        ans = temp * f;
        d -= temp;
        ans += min(a, d) * e;
    }
    cout << ans;
    return 0;
}