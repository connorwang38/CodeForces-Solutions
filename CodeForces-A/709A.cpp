#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, b, d, cur = 0, count = 0;
    cin >> n >> b >> d;
    while (n--) {
        int c; cin >> c;
        if (c <= b) {
            cur += c;
            if (cur > d) {
                cur = 0;
                count++;
            }
        }
    }
    cout << count << endl;
}
