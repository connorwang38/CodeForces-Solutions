#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, ans = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s == "Tetrahedron") {
            ans += 4;
        } else if (s == "Cube") {
            ans += 6;
        } else if (s == "Octahedron") {
            ans += 8;
        } else if (s == "Dodecahedron") {
            ans += 12;
        } else if (s == "Icosahedron") {
            ans += 20;
        }
    }
    cout << ans << endl;
}