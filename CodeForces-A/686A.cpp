#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, x, count = 0;
    cin >> n >> x;
    while (n--) {
        char s;
        long long c;
        cin >> s >> c;
        if (s == '+') {
            x += c;
        } else if (c <= x) {
            x -= c;
        } else {
            count++;
        }
    }
    cout << x << " " << count << "\n";
}