#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, m; cin >> n >> m;
    ll array1[5] = {n / 5 + (n % 5 >= 1), n / 5 + (n % 5 >= 2), n / 5 + (n % 5 >= 3), n / 5 + (n % 5 >= 4), n / 5};
    ll array2[5] = {m / 5 + (m % 5 >= 1), m / 5 + (m % 5 >= 2), m / 5 + (m % 5 >= 3), m / 5 + (m % 5 >= 4), m / 5};
    cout << array1[0] * array2[3] + array1[1] * array2[2] + array1[2] * array2[1] + array1[3] * array2[0] + array1[4] * array2[4] << endl;
}