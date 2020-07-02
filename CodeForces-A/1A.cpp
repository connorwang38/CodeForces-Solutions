#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    long double n, m, a;
    cin >> n >> m >> a;
    long long ans = (long long) ceil(m / a) * (long long) ceil(n / a);
    cout << ans << "\n";
    return 0;
}