#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int tone = 0;
    int one = 0;
    while (one < n) {
        tone++;
        one += k;
    }
    if (d + t < t * tone) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}